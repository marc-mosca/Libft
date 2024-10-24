/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:03:43 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 17:07:46 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an uppercase letter to its lowercase equivalent.
 *
 * This function checks if the given character is an uppercase letter
 * ('A' to 'Z'). If it is, the function converts it to the corresponding
 * lowercase letter by adding 32 to its ASCII value. If the character is not an
 * uppercase letter, it is returned unchanged.
 *
 * @param c The character to be converted, passed as an integer.
 *
 * @return The lowercase equivalent of the input character if it is an uppercase
 * letter. Otherwise, the character is returned unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
