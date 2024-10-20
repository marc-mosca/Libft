/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:34:19 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:38:41 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of the given null-terminated string.
 *
 * This function calculates the length of the string by counting the number of
 * characters before the terminating null character. It iterates through the
 * string until it encounters the null character and returns the total number of
 * characters.
 *
 * @param s A pointer to the null-terminated string whose length is to be
 * computed.
 *
 * @return The number of characters in the string excluding the null terminator.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
