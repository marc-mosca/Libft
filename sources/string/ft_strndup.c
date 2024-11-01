/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:31:46 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:35:25 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a specified number of characters from a string.
 *
 * This function allocates memory for a copy of up to `length` characters from
 * `source` and returns a pointer to the new string. If allocation fails, `NULL`
 * is returned. The copied string is null-terminated.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     const char *original = "Hello, World!";
 *     char *duplicate = ft_strndup(original, 6);
 *     if (duplicate != NULL) {
 *         // Use the duplicated string
 *         free(duplicate); // Free the memory when done
 *     }
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to duplicate.
 * @param length The maximum number of characters to copy from `source`.
 *
 * @return A pointer to the duplicated string, or `NULL` if allocation fails.
 *
 * @note The returned string should be freed when no longer needed.
 */
char	*ft_strndup(const char *source, size_t length)
{
	char	*destination;
	size_t	len;

	len = ft_strnlen(source, length);
	destination = ft_calloc(len + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	return (ft_memcpy(destination, source, length));
}
