/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:21:25 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 18:32:50 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a string to a destination buffer, ensuring null-termination.
 *
 * This function copies up to `dstsize - 1` characters from the string `src` to
 * the buffer `dst`, ensuring that the destination string is null-terminated.
 * The function guarantees that the result is always null-terminated unless
 * `dstsize` is 0. The function returns the total length of the string `src`,
 * which allows the caller to detect truncation if the return value is greater
 * than or equal to `dstsize`.
 *
 * @param dst A pointer to the destination buffer where the string will be
 * copied.
 * @param src A pointer to the source string to be copied.
 * @param dstsize The size of the destination buffer.
 *
 * @return The length of the source string `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	if (!src)
	{
		dst = NULL;
		return (0);
	}
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	ft_memcpy(dst, src, dstsize - 1);
	dst[dstsize - 1] = '\0';
	return (srcsize);
}
