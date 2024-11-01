/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:00:35 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 16:17:29 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
 * Exemple:
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
