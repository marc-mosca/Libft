# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 20:37:29 by mmosca            #+#    #+#              #
#    Updated: 2024/10/19 20:39:12 by mmosca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = 																	\
	src/characters/ft_isalnum.c												\
	src/characters/ft_isalpha.c												\
	src/characters/ft_isascii.c												\
	src/characters/ft_isdigit.c												\
	src/characters/ft_isprint.c												\
	src/memories/ft_bzero.c													\
	src/memories/ft_memcpy.c												\
	src/memories/ft_memmove.c												\
	src/memories/ft_memset.c												\
	src/strings/ft_strlcat.c												\
	src/strings/ft_strlcpy.c												\
	src/strings/ft_strlen.c													\
	src/strings/ft_strnlen.c

OBJECTS = $(SOURCES:.c=.o)
