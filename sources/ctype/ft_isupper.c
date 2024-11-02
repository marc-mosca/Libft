/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:11:20 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:28:51 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is an uppsercase letter.
 *
 * This function determines if the given falls within the ASCII range for
 * uppercase letters.
 *
 * @param character The character to check, given as an integer.
 *
 * @return True if the character is uppercase, otherwise return False.
 */
bool	ft_isupper(int character)
{
	return ((unsigned) character - 'A' < ALPHABET_SIZE);
}
