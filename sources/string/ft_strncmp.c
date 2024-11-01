/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:37:29 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:07:10 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings up to a specified number of characters.
 *
 * This function compares the strings `source1` and `source2` character by
 * character, up to a maximum of `length` characters. The comparison stops if a
 * null-terminator is encountered in either string, or if a mismatch is found
 * before `length` characters. The function returns an integer less than, equal
 * to, or greater than zero depending on whether `source1` is found to be less
 * than, equal to, or greater than `source2`.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     const char *str1 = "Hello";
 *     const char *str2 = "Hello, World!";
 *     int result = ft_strncmp(str1, str2, 5); // Result is 0
 *     result = ft_strncmp(str1, str2, 10);    // Result is negative
 *     return (0);
 * }
 * @endcode
 *
 * @param source1 A pointer to the first null-terminated string to be compared.
 * @param source2 A pointer to the second null-terminated string to be compared.
 * @param length The maximum number of characters to compare.
 *
 * @return An integer indicating the result of the comparison:
 * - A negative value if `source1` is less than `source2`.
 * - 0 if `source1` is equal to `source2`.
 * - A positive value if `source1` is greater than `source2`.
 */
int	ft_strncmp(const char *source1, const char *source2, size_t length)
{
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = (void *) source1;
	src2 = (void *) source2;
	if (length == 0)
		return (0);
	length--;
	while (length > 0 && *src1 != '\0' && *src2 != '\0' && *src1 == *src2)
	{
		src1++;
		src2++;
		length--;
	}
	return (*src1 - *src2);
}
