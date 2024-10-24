/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:09:01 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 17:13:21 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a character in a string.
 *
 * This function searches the string `s` for the first occurrence of the
 * character `c`. The search includes the null-terminator (`'\0'`). If `c` is
 * found, a pointer to the first occurrence of `c` in the string is returned.
 * If `c` is not found, the function returns `NULL`.
 *
 * @param s A pointer to the null-terminated string to be searched.
 * @param c The character to locate, passed as an integer.
 *
 * @return A pointer to the first occurrence of `c` in the string, or `NULL` if
 * the character is not found.
 */
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}
