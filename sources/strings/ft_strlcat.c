/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:38:27 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 16:17:14 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings, ensuring null-termination and avoiding buffer
 * overflow.
 *
 * This function appends the string `src` to the end of `dst`, ensuring that the
 * total length of the resulting string does not exceed `dstsize - 1`
 * characters, with a null-terminator always appended. It returns the total
 * length of the string it tried to create, i.e., the initial length of `dst`
 * plus the length of `src`. If the return value is greater than or equal to
 * `dstsize`, it means truncation occurred, and the result is not fully copied.
 *
 * @param dst A pointer to the destination buffer, which should contain a
 * null-terminated string.
 * @param src A pointer to the source string to be appended to `dst`.
 * @param dstsize The total size of the destination buffer, including space for
 * the null-terminator.
 *
 * @return The total length of the string `dst` would have had if `dstsize` were
 * large enough.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	i = 0;
	dstlen = ft_strnlen(dst, dstsize);
	while (src[i] != '\0' && dstlen + i + 1 < dstsize)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (dstlen != dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
