/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:50:36 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:16:30 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is an alphabetic letter.
 *
 * This function checks whether the provided character is an alphabetic letter,
 * either uppercase ('A' to 'Z') or lowercase ('a' to 'z'). It uses the ASCII
 * values of the characters to determine if the character is alphabetic.
 *
 * @param c The character to be checked, passed as an integer.
 *
 * @return True if the character is an alphabetic letter.
 *         False if the character is not an alphabetic letter.
 */
bool	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
