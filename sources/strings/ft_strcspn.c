/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:58:41 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 11:20:33 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of the initial segment of `s` not containing any
 * `charset` characters.
 *
 * This function returns the number of characters in the initial segment of `s`
 * that do not appear in `charset`.
 *
 * @param s A pointer to the null-terminated string to be scanned.
 * @param charset A null-terminated string of characters to search for.
 *
 * @return The number of characters in the initial segment of `s` that do not
 * match `charset`.
 */
size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (s[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
