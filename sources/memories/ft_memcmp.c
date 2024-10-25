/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:34:02 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 09:37:46 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two memory blocks byte by byte up to a specified number of bytes.
 *
 * This function compares the first `n` bytes of the memory blocks pointed to by
 * `s1` and `s2`. The comparison is performed byte by byte. If a difference is
 * found, the function returns the difference between the first differing bytes
 * interpreted as `unsigned char` values. If the blocks are identical up to the
 * specified number of bytes, the function returns 0.
 *
 * @param s1 A pointer to the first memory block to be compared.
 * @param s2 A pointer to the second memory block to be compared.
 * @param n The maximum number of bytes to compare.
 *
 * @return An integer indicating the result of the comparison:
 * - A negative value if the first differing byte in `s1` is less than the
 * corresponding byte in `s2`.
 * - 0 if the memory blocks are identical up to `n` bytes.
 * - A positive value if the first differing byte in `s1` is greater than the
 * corresponding byte in `s2`.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*((unsigned char *) s1) - *((unsigned char *) s2) != 0)
			return (*(unsigned char *) s1 - *(unsigned char *) s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
