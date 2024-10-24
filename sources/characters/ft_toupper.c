/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:01:18 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/24 17:06:18 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a lowercase letter to its uppercase equivalent.
 *
 * This function checks if the given character is a lowercase letter
 * ('a' to 'z'). If it is, the function converts it to the corresponding
 * uppercase letter by subtracting 32 from its ASCII value. If the character is
 * not a lowercase letter, it is returned unchanged.
 *
 * @param c The character to be converted, passed as an integer.
 *
 * @return The uppercase equivalent of the input character if it is a lowercase
 * letter. Otherwise, the character is returned unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
