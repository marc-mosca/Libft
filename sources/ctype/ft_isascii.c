/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:39:18 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 15:59:57 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a valid ASCII character.
 *
 * This function checks whether the provided character is part of the ASCII set,
 * which includes characters with values from 0 to 127 (inclusive).
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     bool result = ft_isascii('A');	// Result is True (ASCII value 65)
 *     result = ft_isascii(200);		// Result is False (outside ASCII range)
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be checked, passed as an interger.
 *
 * @return True if the character is an ASCII character, otherwise return False.
 */
bool	ft_isascii(int character)
{
	return (!(character & ~DELETE_CHARACTER));
}
