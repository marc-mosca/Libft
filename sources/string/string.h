/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:51:11 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 20:56:22 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

// MARK: - Includes

# include <stdlib.h>

// MARK: - Prototypings

void	ft_bzero(void *buffer, size_t length);
void	*ft_memchr(const void *source, int character, size_t length);
int		ft_memcmp(const void *source1, const void *source2, size_t length);
void	*ft_memcpy(void *destination, const void *source, size_t length);
void	*ft_memmove(void *destination, const void *source, size_t length);
void	*ft_memrchr(const void *source, int character, size_t length);
void	*ft_memset(void *buffer, int character, size_t length);
char	*ft_strchr(const char *source, int character);
size_t	ft_strcspn(const char *source, const char *charset);
char	*ft_strdup(const char *source);
size_t	ft_strlcat(char *destination, const char *source, size_t length);
size_t	ft_strlcpy(char *destination, const char *source, size_t length);
size_t	ft_strlen(const char *source);
int		ft_strncmp(const char *source1, const char *source2, size_t length);
char	*ft_strndup(const char *source, size_t length);
size_t	ft_strnlen(const char *source, size_t length);
char	*ft_strnstr(const char *haystack, const char *needle, size_t length);
char	*ft_strrchr(const char *source, int character);

#endif // STRING_H
