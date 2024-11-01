/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:34:43 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 16:00:02 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * This function checks whether the provided character is alphanumeric, meaning
 * it is either a letter (uppercase or lowercase) or a numeric digit.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     bool result = ft_isalnum('A');	// Result is True
 *     result = ft_isalnum('5');		// Result is True
 *     result = ft_isalnum('@');		// Result is False
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be checked, passed as an interger.
 *
 * @return True if the character is an alphanumeric character, otherwise return
 * False.
 */
bool	ft_isalnum(int character)
{
	return (ft_isalpha(character) == true || ft_isdigit(character) == true);
}
