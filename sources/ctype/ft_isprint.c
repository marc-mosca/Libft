/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:45:29 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 15:59:52 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a printable ASCII character.
 *
 * This function checks whether the provided character is a printable ASCII
 * character. Printable characters include all visible characters from space to
 * tilde corresponding to ASCII values 32 through 126.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     bool result = ft_isprint('A');	// Result is True
 *     result = ft_isprint('\n');		// Result is False
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be checked, passed as an interger.
 *
 * @return True if the character is printable, otherwise return False.
 */
bool	ft_isprint(int character)
{
	return ((unsigned) character - 0x20 < 0x5F);
}
