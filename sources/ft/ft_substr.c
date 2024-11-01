/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:43:52 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 20:54:54 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a substring from a specified position and length.
 *
 * This function allocates memory for a substring of up to `length` characters
 * starting from the `start` index in the string `source`. If `start` is beyond
 * the end of `source`, an empty string is returned. If memory allocation fails,
 * `NULL` is returned.
 *
 * The resulting substring is null-terminated.
 *
 * @param source A pointer to the null-terminated source string.
 * @param start The starting index of the substring within `source`.
 * @param length The maximum length of the substring to extract.
 *
 * @return A pointer to the newly allocated substring, or `NULL` if allocation
 * fails.
 */
char	*ft_substr(const char *source, unsigned int start, size_t length)
{
	size_t	source_length;
	size_t	copy_length;
	char	*destination;

	if (source == NULL)
		return (NULL);
	source_length = ft_strlen(source);
	if (start >= source_length)
		return (ft_calloc(1, sizeof(char)));
	copy_length = source_length - start;
	if (copy_length > length)
		copy_length = length;
	destination = ft_calloc(copy_length + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	ft_memcpy(destination, source + start, copy_length);
	return (destination);
}
