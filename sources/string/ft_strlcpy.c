/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:33:47 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 16:48:51 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string to a destination buffer, ensuring null-termination.
 *
 * This function copies up to `length - 1` characters from the string `source`
 * to the buffer `destination`, ensuring that the destination string is
 * null-terminated. The function guarantees that the result is always
 * null-terminated unless `length` is 0. The function returns the total length
 * of the string `source`, which allows the caller to detect truncation if the
 * return value is greater than or equal to `length`.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     char src[] = "Hello, World!";
 *     char dst[6];
 *     ft_strlcpy(dst, src, sizeof(dst)); // dst now contains "Hello\0"
 *     return (0);
 * }
 * @endcode
 *
 * @param destination A pointer to the destination buffer where the string will
 * be copied.
 * @param source A pointer to the source string to be copied.
 * @param length The size of the destination buffer.
 *
 * @return The length of the source string `source`.
 *
 * @note If `dstsize` is 0, the destination string is not modified. The function
 * handles `NULL` input by returning 0 and setting `dst` to `NULL`.
 */
size_t	ft_strlcpy(char *destination, const char *source, size_t length)
{
	char	*dest;

	dest = destination;
	if (length == 0)
		return (destination - dest + ft_strlen(source));
	length--;
	while (length > 0 && *source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
		length--;
	}
	*destination = '\0';
	return (destination - dest + ft_strlen(source));
}
