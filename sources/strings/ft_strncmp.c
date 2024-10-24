/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:34:20 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 17:39:02 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two strings up to a specified number of characters.
 *
 * This function compares the strings `s1` and `s2` character by character, up
 * to a maximum of `n` characters. The comparison stops if a null-terminator is
 * encountered in either string, or if a mismatch is found before `n`
 * characters. The function returns an integer less than, equal to, or greater
 * than zero depending on whether `s1` is found to be less than, equal to, or
 * greater than `s2`.
 *
 * @param s1 A pointer to the first null-terminated string to be compared.
 * @param s2 A pointer to the second null-terminated string to be compared.
 * @param n The maximum number of characters to compare.
 *
 * @return An integer indicating the result of the comparison:
 * - A negative value if `s1` is less than `s2`.
 * - 0 if `s1` is equal to `s2`.
 * - A positive value if `s1` is greater than `s2`.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
