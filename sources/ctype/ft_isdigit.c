/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:29:02 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:31:57 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a digit.
 *
 * This function checks whether the provided character is a numeric digit. It
 * uses the ASCII values of the characters to determine if the character is a
 * digit.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     bool result = ft_isdigit('5');	// Result is True
 *     result = ft_isdigit('A');		// Result is False
 *     return (0);
 * }
 * @endcode
 *
 * @param character The character to be checked, passed as an interger.
 *
 * @return True if the character is a digit, otherwise return False.
 */
bool	ft_isdigit(int character)
{
	return ((unsigned) character - '0' < DIGIT_SIZE);
}
