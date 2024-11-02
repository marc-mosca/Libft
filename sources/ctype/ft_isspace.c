/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:55:57 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:14:05 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a whitespace character.
 *
 * This function determines if the given character `character` is a whitespace
 * character, including spaces, tab, newline, vertical tab, form feed, or
 * carriage return.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     bool result = ft_isspace(' '); // Result is True
 *     result = ft_isspace('a');      // Result is False
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to check, passed as an integer.
 *
 * @return True if the character is a whitespace character, otherwise return
 * False.
 */
bool	ft_isspace(int character)
{
	return (character == ' ' || (unsigned) character - '\t' < 5);
}
