/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:15:18 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 10:28:10 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a substring from a specified position and length.
 *
 * This function allocates memory for a substring of up to `len` characters
 * starting from the `start` index in the string `s`. If `start` is beyond the
 * end of `s`, an empty string is returned. If memory allocation fails, `NULL`
 * is returned.
 *
 * The resulting substring is null-terminated.
 *
 * @param s A pointer to the null-terminated source string.
 * @param start The starting index of the substring within `s`.
 * @param len The maximum length of the substring to extract.
 *
 * @return A pointer to the newly allocated substring, or `NULL` if allocation
 * fails.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	copy_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	str = ft_calloc(copy_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, copy_len);
	return (str);
}
