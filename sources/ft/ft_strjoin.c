/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:48:05 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 20:54:44 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings into a newly allocated string.
 *
 * This function allocates memory for a new string that contains the contents of
 * `source1` followed by the contents of `source2`. If either `source1` or
 * `source2` is `NULL`, the function returns `NULL`. If memory allocation fails,
 * it also returns `NULL`.
 *
 * @param source1 A pointer to the first null-terminated string.
 * @param source2 A pointer to the second null-terminated string.
 *
 * @return A pointer to the newly allocated concatenated string, or `NULL` if
 * allocation fails or if either input string is `NULL`.
 */
char	*ft_strjoin(const char *source1, const char *source2)
{
	size_t	source1_length;
	size_t	source2_length;
	char	*destination;

	if (source1 == NULL || source2 == NULL)
		return (NULL);
	source1_length = ft_strlen(source1);
	source2_length = ft_strlen(source2);
	destination = ft_calloc(source1_length + source2_length + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	ft_memcpy(destination, source1, source1_length);
	ft_memcpy(destination + source1_length, source2, source2_length);
	return (destination);
}
