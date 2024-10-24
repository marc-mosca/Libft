/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:15:35 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 17:19:23 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the last occurrence of a character in a string.
 *
 * This function searches the string `s` for the last occurrence of the
 * character `c`. The search includes the null-terminator (`'\0'`). If `c` is
 * found, a pointer to the last occurrence of `c` in the string is returned.
 * If `c` is not found, the function returns `NULL`.
 *
 * @param s A pointer to the null-terminated string to be searched.
 * @param c The character to locate, passed as an integer.
 *
 * @return A pointer to the last occurrence of `c` in the string, or `NULL` if
 * the character is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
