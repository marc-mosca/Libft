/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:02:16 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 11:19:48 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a specified number of characters from a string.
 *
 * This function allocates memory for a copy of up to `n` characters from `s`
 * and returns a pointer to the new string. If allocation fails, `NULL` is
 * returned. The copied string is null-terminated.
 *
 * @param s A pointer to the null-terminated string to duplicate.
 * @param n The maximum number of characters to copy from `s`.
 *
 * @return A pointer to the duplicated string, or `NULL` if allocation fails.
 */
char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = ft_calloc(n + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, n + 1);
	return (str);
}
