/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:12:14 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 18:17:34 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory, handling overlapping regions.
 *
 * This function copies `len` bytes from the memory area pointed to by `src` to
 * the memory area pointed to by `dst`. If the source is before the destination,
 * the copying is done backwards to avoid corruption. If either `dst` or `src`
 * is `NULL`, the function returns `NULL`.
 *
 * @param dst A pointer to the destination memory area where data will be copied
 * to.
 * @param src A pointer to the source memory area from which data will be
 * copied.
 * @param len The number of bytes to copy from `src` to `dst`.
 *
 * @return A pointer to the destination memory area `dst`.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
			len--;
		}
	}
	return (dst);
}
