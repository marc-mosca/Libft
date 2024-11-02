/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:59:35 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:25:04 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of a string, up to a maximum number of characters.
 *
 * This function calculates the length of the string `source`, but not more than
 * `length` characters. It returns the number of characters in the string before
 * the null-terminator or the value of `length`, whichever is smaller. This is
 * useful when working with buffers of limited size.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     const char *str = "Hello, World!";
 *     size_t len = ft_strnlen(str, 5);	// len is 5
 *     len = ft_strnlen(str, 20);		// len is 13 (length of the string)
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to be measured.
 * @param length The maximum number of characters to be counted.
 *
 * @return The number of characters in the string, limited by `length`.
 *
 * @note If the string is shorter than `length`, the function returns the actual
 * length of the string. If `length` is reached before encountering the
 * null-terminator, the function returns `length`.
 */
size_t	ft_strnlen(const char *source, size_t length)
{
	const char	*ptr;

	ptr = ft_memchr(source, 0, length);
	if (ptr != NULL)
		return (ptr - source);
	return (length);
}
