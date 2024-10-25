/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:32:43 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 10:37:04 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings into a newly allocated string.
 *
 * This function allocates memory for a new string that contains the contents of
 * `s1` followed by the contents of `s2`. If either `s1` or `s2` is `NULL`, the
 * function returns `NULL`. If memory allocation fails, it also returns `NULL`.
 *
 * @param s1 A pointer to the first null-terminated string.
 * @param s2 A pointer to the second null-terminated string.
 *
 * @return A pointer to the newly allocated concatenated string, or `NULL` if
 * allocation fails or if either input string is `NULL`.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	return (str);
}
