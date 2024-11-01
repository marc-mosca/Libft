/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:31:12 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:34:16 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function searches the string `source` for the last occurrence of the
 * character `character`. The search includes the null-terminator. If
 * `character` is found, a pointer to the last occurrence of `character` in the
 * string is returned. If `character` is not found, the function returns `NULL`.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     const char *str = "Hello, World!";
 *     char *result = ft_strrchr(str, 'o'); // result points to the last 'o'
 *     result = ft_strrchr(str, 'x');       // result is NULL
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to be searched.
 * @param character The character to locate, passed as an integer.
 *
 * @return A pointer to the last occurrence of `c` in the string, or `NULL` if
 * the character is not found.
 *
 * @note The function casts the character `character` to `unsigned char` for
 * comparison.
 */
char	*ft_strrchr(const char *source, int character)
{
	return (ft_memrchr(source, character, ft_strlen(source) + 1));
}
