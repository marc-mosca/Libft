/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:10:25 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:22:54 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lowercase letter to its uppercase equivalent.
 *
 * This function checks if the given character is a lowercase letter. If it is,
 * the function converts it to the corresponding uppercase letter by subtracting
 * 32 from its ASCII value. If the character is not a lowercase letter, it is
 * returned unchanged.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     int result = ft_toupper('a'); // result is 'A'
 *     result = ft_toupper('A');     // result is 'A'
 *     result = ft_toupper('1');     // result is '1' (unchanged)
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be converted, passed as an integer.
 *
 * @return The uppercase equivalent of the input character if it is a lowercase
 * letter. Otherwise, the character is returned unchanged.
 */
int	ft_toupper(int character)
{
	if (ft_islower(character) == true)
		return (character & 0x5F);
	return (character);
}
