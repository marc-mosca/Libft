/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:44:16 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:48:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory blocks byte by byte up to a specified number of
 * bytes.
 *
 * This function compares the first `length` bytes of the memory blocks pointed
 * to by `source1` and `source2`. The comparison is performed byte by byte. If a
 * difference is found, the function returns the difference between the first
 * differing bytes interpreted as `unsigned char` values. If the blocks are
 * identical up to the specified number of bytes, the function returns 0.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     const char *block1 = "Hello, World!";
 *     const char *block2 = "Hello, everyone!";
 *     int result = ft_memcmp(block1, block2, 7); // Result is 0
 *     result = ft_memcmp(block1, block2, 10);    // Result is negative
 *     return (0);
 * }
 * @endcode
 *
 * @param source1 A pointer to the first memory block to be compared.
 * @param source2 A pointer to the second memory block to be compared.
 * @param length The maximum number of bytes to compare.
 *
 * @return An integer indicating the result of the comparison:
 * - A negative value if the first differing byte in `source1` is less than the
 * corresponding byte in `source2`.
 * - 0 if the memory blocks are identical up to `length` bytes.
 * - A positive value if the first differing byte in `source1` is greater than
 * the corresponding byte in `source2`.
 */
int	ft_memcmp(const void *source1, const void *source2, size_t length)
{
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = source1;
	src2 = source2;
	while (length > 0 && *src1 == *src2)
	{
		src1++;
		src2++;
		length--;
	}
	if (length != 0)
		return (*src1 - *src2);
	return (0);
}
