/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:19:16 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:34:44 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function searches the string `source` for the first occurrence of the
 * character `character`. The search includes the null-terminator. If
 * `character` is found, a pointer to the first occurrence of `character` in the
 * string is returned. If `character` is not found, the function returns `NULL`.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     const char *str = "Hello, World!";
 *     char *result = ft_strchr(str, 'o'); // Result points to the first 'o'
 *     result = ft_strchr(str, 'x');       // Result is NULL
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to be searched.
 * @param character The character to locate, passed as an integer.
 *
 * @return A pointer to the first occurrence of `c` in the string, or `NULL` if
 * the character is not found.
 *
 * @note The function casts the character `character` to `unsigned char` for
 * comparison.
 */
char	*ft_strchr(const char *source, int character)
{
	return (ft_memchr(source, character, ft_strlen(source) + 1));
}
