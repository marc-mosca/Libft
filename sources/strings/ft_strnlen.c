/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:43:53 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 16:58:17 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Computes the length of a string, up to a maximum number of characters.
 *
 * This function calculates the length of the string `s`, but not more than
 * `maxlen` characters. It returns the number of characters in the string before
 * the null-terminator or the value of `maxlen`, whichever is smaller. This is
 * useful when working with buffers of limited size.
 *
 * @param s A pointer to the null-terminated string to be measured.
 * @param maxlen The maximum number of characters to be counted.
 *
 * @return The number of characters in the string, limited by `maxlen`.
 */
size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i < maxlen)
		i++;
	return (i);
}
