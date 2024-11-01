/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:09:54 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:21:23 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase letter to its lowercase equivalent.
 *
 * This function checks if the given character is an uppercase letter. If it is,
 * the function converts it to the corresponding lowercase letter by adding 32
 * to its ASCII value. If the character is not an uppercase letter, it is
 * returned unchanged.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     int result = ft_tolower('A'); // result is 'a'
 *     result = ft_tolower('a');     // result is 'a'
 *     result = ft_tolower('1');     // result is '1' (unchanged)
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be converted, passed as an integer.
 *
 * @return The lowercase equivalent of the input character if it is an uppercase
 * letter. Otherwise, the character is returned unchanged.
 */
int	ft_tolower(int character)
{
	if (ft_isupper(character) == true)
		return (character | 32);
	return (character);
}
