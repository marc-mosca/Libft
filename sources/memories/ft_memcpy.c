/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:07:49 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 18:11:18 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory from one location to another.
 *
 * This function copies `n` bytes from the memory area pointed to by `src` to
 * the memory area pointed to by `dst`. It does not handle overlapping memory
 * regions, so if the source and destination overlap, the behavior is undefined.
 * If either `dst` or `src` is `NULL`, the function returns `NULL`.
 *
 * @param dst A pointer to the destination memory area where data will be copied
 * to.
 * @param src A pointer to the source memory area from which data will be
 * copied.
 * @param n The number of bytes to copy from `src` to `dst`.
 *
 * @return A pointer to the destination memory area `dst`.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*p;

	if (!dst && !src)
		return (NULL);
	p = dst;
	while (n > 0)
	{
		*(unsigned char *) dst = *(unsigned char *) src;
		dst++;
		src++;
		n--;
	}
	return (p);
}
