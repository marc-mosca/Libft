/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:04:32 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:09:08 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings, ensuring null-termination and avoiding
 * buffer overflow.
 *
 * This function appends the string `source` to the end of `destination`,
 * ensuring that the total length of the resulting string does not exceed
 * `length - 1` characters, with a null-terminator always appended. It returns
 * the total length of the string it tried to create, i.e., the initial length
 * of `destination` plus the length of `source`. If the return value is greater
 * than or equal to `length`, it means truncation occurred, and the result is
 * not fully copied.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     char dst[20] = "Hello, ";
 *     const char *src = "World!";
 *     ft_strlcat(dst, src, sizeof(dst)); // dst now contains "Hello, World!"
 *     return (0);
 * }
 * @endcode
 *
 * @param destination A pointer to the destination buffer, which should contain
 * a null-terminated string.
 * @param source A pointer to the source string to be appended to `destination`.
 * @param length The total size of the destination buffer, including space for
 * the null-terminator.
 *
 * @return The total length of the string `destination` would have had if
 * `length` were large enough.
 *
 * @note If `length` is smaller than the length of `destination`, the function
 * returns `length + ft_strlen(source)`. This allows the caller to detect
 * truncation by comparing the return value to `length`.
 */
size_t	ft_strlcat(char *destination, const char *source, size_t length)
{
	size_t	len;

	len = ft_strnlen(destination, length);
	if (len == length)
		return (len + ft_strlen(source));
	return (len + ft_strlcpy(destination + len, source, length - len));
}
