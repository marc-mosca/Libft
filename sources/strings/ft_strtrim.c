/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:28:25 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 10:36:12 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Trims specified characters from the beginning and end of a string.
 *
 * This function removes all occurrences of any character in `set` from the
 * beginning and end of the string `s`. A new trimmed string is allocated and
 * returned. If `s` or `set` is `NULL`, the function returns `NULL`. If the
 * memory allocation for the trimmed string fails, `NULL` is returned.
 *
 * @param s A pointer to the null-terminated string to be trimmed.
 * @param set A pointer to a null-terminated string containing characters to
 * trim.
 *
 * @return A pointer to the newly allocated trimmed string, or `NULL` if an
 * error occurs.
 */
char	*ft_strtrim(const char *s, const char *set)
{
	const char	*begin;
	const char	*end;
	char		*str;
	size_t		trimmed_length;

	if (!s || !set)
		return (NULL);
	begin = s;
	while (*begin != '\0' && ft_strchr(set, *begin) != NULL)
		begin++;
	end = s + ft_strlen(s);
	while (end > begin && ft_strchr(set, *end) != NULL)
		end--;
	trimmed_length = end - begin;
	str = ft_calloc(trimmed_length + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, begin, trimmed_length);
	return (str);
}
