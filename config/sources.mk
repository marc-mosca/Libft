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
	sources/ctype/ft_isalnum.c												\
	sources/ctype/ft_isalpha.c												\
	sources/ctype/ft_isascii.c												\
	sources/ctype/ft_isdigit.c												\
	sources/ctype/ft_islower.c												\
	sources/ctype/ft_isprint.c												\
	sources/ctype/ft_isspace.c												\
	sources/ctype/ft_isupper.c												\
	sources/ctype/ft_tolower.c												\
	sources/ctype/ft_toupper.c												\
	sources/ft/lists/ft_lstadd_front.c										\
	sources/ft/lists/ft_lstnew.c											\
	sources/ft/lists/ft_lstsize.c											\
	sources/ft/ft_itoa.c													\
	sources/ft/ft_putchar_fd.c												\
	sources/ft/ft_putendl_fd.c												\
	sources/ft/ft_putnbr_fd.c												\
	sources/ft/ft_putstr_fd.c												\
	sources/ft/ft_split.c													\
	sources/ft/ft_striteri.c												\
	sources/ft/ft_strjoin.c													\
	sources/ft/ft_strmapi.c													\
	sources/ft/ft_strtrim.c													\
	sources/ft/ft_substr.c													\
	sources/stdlib/ft_abs.c													\
	sources/stdlib/ft_atoi.c												\
	sources/stdlib/ft_calloc.c												\
	sources/string/ft_bzero.c												\
	sources/string/ft_memchr.c												\
	sources/string/ft_memcmp.c												\
	sources/string/ft_memcpy.c												\
	sources/string/ft_memmove.c												\
	sources/string/ft_memrchr.c												\
	sources/string/ft_memset.c												\
	sources/string/ft_strchr.c												\
	sources/string/ft_strcspn.c												\
	sources/string/ft_strdup.c												\
	sources/string/ft_strlcat.c												\
	sources/string/ft_strlcpy.c												\
	sources/string/ft_strlen.c												\
	sources/string/ft_strncmp.c												\
	sources/string/ft_strndup.c												\
	sources/string/ft_strnlen.c												\
	sources/string/ft_strnstr.c												\
	sources/string/ft_strrchr.c

OBJECTS = $(SOURCES:.c=.o)
