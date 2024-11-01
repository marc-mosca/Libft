/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:27:33 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 16:32:55 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a block of memory, handling overlapping regions.
 *
 * This function copies `length` bytes from the memory area pointed to by
 * `source` to the memory area pointed to by `destination`. If the source is
 * before the destination, the copying is done backwards to avoid corruption. If
 * either `destination` or `source` is `NULL`, the function returns `NULL`.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     char src[10] = "Hello";
 *     ft_memmove(src + 2, src, 3); // Moves "Hel" to "loHel"
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
 * @return A pointer to the destination memory area `dst`.
 *
 * @note Use this function when copying memory regions that may overlap.
 */
void	*ft_memmove(void *destination, const void *source, size_t length)
{
	char		*dest;
	const char	*src;

	dest = destination;
	src = source;
	if (dest == src)
		return (dest);
	if ((unsigned long) src - (unsigned long) dest - length <= length * -2)
		return (ft_memcpy(dest, src, length));
	if (dest < src)
		ft_memcpy(dest, src, length);
	else
	{
		while (length > 0)
		{
			dest[length] = src[length];
			length--;
		}
	}
	return (destination);
}
