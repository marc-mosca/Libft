/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:29:26 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:31:12 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Searches for the last occurrence of a character in a memory block.
 *
 * This function searches backwards from the end of `source` for the last
 * occurrence of `character` within the first `length` bytes. If `character` is
 * found, a pointer to the position is returned.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     const char data[] = "example";
 *     char *result = ft_memrchr(data, 'e', 7); // Points to the last 'e'.
 *     return (0);
 * }
 * @endcode
 *
 * @param source The pointer to the memory block to search.
 * @param character The character to search for, given as an integer.
 * @param length The number of bytes to search through in `source`.
 *
 * @return A pointer to the last occurrence of `character` within the specified
 * range, or `NULL` if `character` is not found.
 */
void	*ft_memrchr(const void *source, int character, size_t length)
{
	const unsigned char	*src;

	src = source;
	character = (unsigned char) character;
	while (length > 0)
	{
		length--;
		if (src[length] == character)
			return ((void *) src + length);
	}
	return (NULL);
}
