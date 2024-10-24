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
	sources/characters/ft_isalnum.c											\
	sources/characters/ft_isalpha.c											\
	sources/characters/ft_isascii.c											\
	sources/characters/ft_isdigit.c											\
	sources/characters/ft_isprint.c											\
	sources/characters/ft_tolower.c											\
	sources/characters/ft_toupper.c											\
	sources/memories/ft_bzero.c												\
	sources/memories/ft_memchr.c											\
	sources/memories/ft_memcpy.c											\
	sources/memories/ft_memmove.c											\
	sources/memories/ft_memset.c											\
	sources/strings/ft_strchr.c												\
	sources/strings/ft_strlcat.c											\
	sources/strings/ft_strlcpy.c											\
	sources/strings/ft_strlen.c												\
	sources/strings/ft_strncmp.c											\
	sources/strings/ft_strnlen.c											\
	sources/strings/ft_strrchr.c

OBJECTS = $(SOURCES:.c=.o)
