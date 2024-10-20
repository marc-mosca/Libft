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

include config/dependencies.mk
include config/sources.mk

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .
AR = ar
ARFLAGS = rcs

.PHONY: all
all:
	$(MAKE) $(NAME)

%.o: %.c $(DEPENDENCIES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY: clean
clean:
	$(RM) $(OBJECTS)

.PHONY: fclean
fclean:
	$(MAKE) clean
	$(RM) $(NAME)

.PHONY: re
re:
	$(MAKE) fclean
	$(MAKE) all
