/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:44:05 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 17:49:50 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a byte in a memory block.
 *
 * This function searches the first `n` bytes of the memory block pointed to by
 * `s` for the first occurrence of the byte `c`. The search is done byte by
 * byte. If the byte `c` is found, a pointer to the matching byte in the memory
 * block is returned. If the byte is not found within the first `n` bytes, the
 * function returns `NULL`.
 *
 * @param s A pointer to the memory block to be searched.
 * @param c The byte to locate, passed as an integer.
 * @param n The number of bytes to search within the memory block.
 *
 * @return A pointer to the first occurrence of `c` in the memory block, or
 * `NULL` if the byte is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *) s == (unsigned char) c)
			return ((unsigned char *) s);
		s++;
		n--;
	}
	return (NULL);
}
