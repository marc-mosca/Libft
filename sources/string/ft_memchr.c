/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:51:49 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:32:35 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a byte in a memory block.
 *
 * This function searches the first `length` bytes of the memory block pointed
 * to by `source` for the first occurrence of the byte `character`. The search
 * is done byte by byte. If the byte `character` is found, a pointer to the
 * matching byte in the memory block is returned. If the byte is not found
 * within the first `length` bytes, the function returns `NULL`.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     const char *str = "Hello, World!";
 *     char *result = ft_memchr(str, 'o', 5);	// Result points to the first o
 *     result = ft_memchr(str, 'x', 12);		// Result is NULL
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the memory block to be searched.
 * @param character The byte to locate, passed as an integer.
 * @param length The number of bytes to search within the memory block.
 *
 * @return A pointer to the first occurrence of `character` in the memory block,
 * or `NULL` if the byte is not found.
 *
 * @note The byte `character` is cast to `unsigned char` for comparison.
 */
void	*ft_memchr(const void *source, int character, size_t length)
{
	const unsigned char	*src;

	src = source;
	character = (unsigned char) character;
	while (length > 0 && *src != character)
	{
		src++;
		length--;
	}
	if (length != 0)
		return ((void *) src);
	return (NULL);
}
