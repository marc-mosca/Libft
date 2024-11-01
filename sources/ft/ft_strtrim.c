/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:50:47 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 20:54:49 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims specified characters from the beginning and end of a string.
 *
 * This function removes all occurrences of any character in `set` from the
 * beginning and end of the string `source`. A new trimmed string is allocated
 * and returned. If `source` or `set` is `NULL`, the function returns `NULL`.
 * If the memory allocation for the trimmed string fails, `NULL` is returned.
 *
 * @param source A pointer to the null-terminated string to be trimmed.
 * @param set A pointer to a null-terminated string containing characters to
 * trim.
 *
 * @return A pointer to the newly allocated trimmed string, or `NULL` if an
 * error occurs.
 */
char	*ft_strtrim(const char *source, const char *set)
{
	const char	*begin;
	const char	*end;
	char		*destination;
	size_t		trimmed_length;

	if (source == NULL || set == NULL)
		return (NULL);
	begin = source;
	while (*begin != '\0' && ft_strchr(set, *begin) != NULL)
		begin++;
	end = source + ft_strlen(source);
	while (end > begin && ft_strchr(set, *end) != NULL)
		end--;
	trimmed_length = end - begin;
	destination = ft_calloc(trimmed_length + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	ft_memcpy(destination, begin, trimmed_length);
	return (destination);
}
