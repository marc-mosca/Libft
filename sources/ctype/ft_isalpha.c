/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:59:20 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:31:50 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is an alphabetic letter.
 *
 * This function checks whether the provided character is an alphabetic letter,
 * either uppercase or lowercase. It uses the ASCII values of the characters to
 * determine if the character is alphabetic.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     bool result = ft_isalpha('A');	// Result is True
 *     result = ft_isalpha('1');		// Result is False
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be checked, passed as an interger.
 *
 * @return True if the character is an alphabetic letter, otherwise return
 * False.
 */
bool	ft_isalpha(int character)
{
	return (((unsigned) character | 32) - 'a' < ALPHABET_SIZE);
}
