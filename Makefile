# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 20:37:29 by mmosca            #+#    #+#              #
#    Updated: 2024/10/19 20:39:12 by mmosca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKELIST := $(word $(words $(MAKEFILE_LIST)), $(MAKEFILE_LIST))

include config/dependencies.mk
include config/sources.mk

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .
AR = ar
ARFLAGS = rcs

.DEFAULT_GOAL := help

.PHONY: all
all: ## Compile the library sources and create `libft.a` library file.
	$(MAKE) $(NAME)

%.o: %.c $(DEPENDENCIES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: clean
clean: ## Clean the objects of the library.
	$(RM) $(OBJECTS)

.PHONY: fclean
fclean: ## Executes `clean` command and clean the library file of the library.
	$(MAKE) clean
	$(RM) $(NAME)

.PHONY: help
help: ## Displays this help menu of commands available for the project.
	@echo "Available commands:\n"
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKELIST) \
	| sort \
	| awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-12s\033[0m %s\n", $$1, $$2}'

.PHONY: norm
norm: ## Executes the norminette program.
	python3 -m norminette .

.PHONY: re
re: ## Executes `fclean` and `all` commands.
	$(MAKE) fclean
	$(MAKE) all
