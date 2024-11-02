/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:21:38 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:32:41 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a block of memory from one location to another.
 *
 * This function copies `length` bytes from the memory area pointed to by
 * `source` to the memory area pointed to by `destination`. It does not handle
 * overlapping memory regions, so if the source and destination overlap, the
 * behavior is undefined.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     char src[10] = "Hello";
 *     char dst[10];
 *     ft_memcpy(dst, src, 5); // Copies "Hello" from `src` to `dst`
 *     return (0);
 * }
 * @endcode
 *
 * @param destination A pointer to the destination memory area where data will
 * be copied to.
 * @param source A pointer to the source memory area from which data will be
 * copied.
 * @param length The number of bytes to copy from `source` to `destination`.
 *
 * @return A pointer to the destination memory area `destination`.
 *
 * @note This function assumes that the source and destination memory areas do
 * not overlap. For overlapping memory regions, consider using `ft_memmove`
 * instead.
 */
void	*ft_memcpy(void *destination, const void *source, size_t length)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = destination;
	src = source;
	while (length > 0)
	{
		*dest = *src;
		dest++;
		src++;
		length--;
	}
	return (destination);
}
