/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:27:01 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:30:30 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a string by allocating new memory and copying the contents.
 *
 * This function allocates sufficient memory to hold a duplicate of the string
 * `source`. The memory for the new string is allocated and initialized to zero,
 * and then the contents of `source` are copied into it. If the memory
 * allocation fails, the function returns `NULL`.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     const char *original = "Hello, World!";
 *     char *duplicate = ft_strdup(original);
 *     if (duplicate != NULL) {
 *         // Use the duplicated string
 *         free(duplicate); // Free the memory when done
 *     }
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to duplicate.
 *
 * @return A pointer to the duplicated string, or `NULL` if memory allocation
 * fails.
 *
 * @note The memory for the duplicated string should be freed when no longer
 * needed.
 */
char	*ft_strdup(const char *source)
{
	char	*destination;
	size_t	length;

	length = ft_strlen(source);
	destination = ft_calloc(length + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	return (ft_memcpy(destination, source, length + 1));
}
