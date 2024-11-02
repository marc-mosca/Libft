/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:11:27 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:28:27 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a lowercase letter.
 *
 * This function determines if the given falls within the ASCII range for
 * lowercase letters.
 *
 * @param character The character to check, given as an integer.
 *
 * @return True if the character is lowercase, otherwise return False.
 */
bool	ft_islower(int character)
{
	return ((unsigned) character - 'a' < ALPHABET_SIZE);
}