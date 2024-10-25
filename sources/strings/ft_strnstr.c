/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:38:54 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 09:47:05 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates a substring within a string, up to a specified number of characters.
 *
 * This function searches for the first occurrence of the substring `needle`
 * within the first `len` characters of the string `haystack`. If `needle` is an
 * empty string, `haystack` is returned. If `needle` is not found within the
 * specified number of characters, the function returns `NULL`. If `needle` is
 * found, a pointer to the beginning of the substring within `haystack` is
 * returned.
 *
 * @param haystack A pointer to the null-terminated string in which to search.
 * @param needle A pointer to the null-terminated substring to find.
 * @param len The maximum number of characters to search within `haystack`.
 *
 * @return A pointer to the first occurrence of `needle` within `haystack`, or
 * `NULL` if `needle` is not found within the first `len` characters.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (needle[0] == '\0')
		return ((char *) haystack);
	needle_len = ft_strlen(needle);
	if (needle_len > len)
		return (NULL);
	i = 0;
	while (i <= len - needle_len)
	{
		if (ft_memcmp(&haystack[i], needle, needle_len) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
