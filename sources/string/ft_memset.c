/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:00:35 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:34:20 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills specific positions of a buffer with a specified character.
 *
 * This function assigns the `character` value to specific positions in the
 * buffer. It fills the first, last, and several inner positions, ensuring
 * boundary checks based on `length` to prevent buffer overflows for small
 * sizes.
 *
 * - For length >= 1, the first and last positions are filled.
 * - For length >= 3, the second and second-last positions are filled.
 * - For length >= 7, additional inner positions are filled.
 *
 * @param ptr A pointer to the buffer to be modified.
 * @param character The character to insert into the buffer, given as an
 * integer.
 * @param length The size of the buffer.
 *
 * @return This function does not return a value.
 *
 * @note If `length` is less than or equal to 2, only the first and last
 * positions are set. Buffer regions are selectively assigned based on `length`.
 */
static void	fill_buffer(unsigned char *ptr, int character, size_t length)
{
	ptr[0] = character;
	ptr[length - 1] = character;
	if (length <= 2)
		return ;
	ptr[1] = character;
	ptr[2] = character;
	ptr[length - 2] = character;
	ptr[length - 3] = character;
	if (length <= 6)
		return ;
	ptr[3] = character;
	ptr[length - 4] = character;
}

/**
 * @brief Fills a block of memory with a specified value.
 *
 * This function sets the first `length` bytes of the memory area pointed to by
 * `buffer` to the specified value `character`.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     char buffer[10];
 *     ft_memset(buffer, 0, 10); // Fills `buffer` with 10 zero bytes.
 *     return (0);
 * }
 * @endcode
 *
 * @param buffer A pointer to the memory area to be filled.
 * @param character The value to be set.
 * @param length The number of bytes to be set in the memory area.
 *
 * @return A pointer to the memory area `b` after the operation.
 *
 * @note Be cautious when setting memory in areas where overlapping may occur,
 * as this function does not handle memory overlap.
 */
void	*ft_memset(void *buffer, int character, size_t length)
{
	unsigned char	*ptr;
	size_t			i;

	if (length == 0)
		return (buffer);
	ptr = buffer;
	fill_buffer(ptr, character, length);
	if (length <= 8)
		return (buffer);
	i = -(unsigned long) ptr & 3;
	ptr += i;
	length -= i;
	length &= -4;
	while (length > 0)
	{
		*ptr = character;
		ptr++;
		length--;
	}
	return (buffer);
}
