/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:26:52 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:39:19 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a valid ASCII character.
 *
 * This function checks whether the provided character is part of the ASCII set,
 * which includes characters with values from 0 to 127 (inclusive).
 *
 * @param c The character to be checked, passed as an integer.
 *
 * @return True if the character is an ASCII character (values from 0 to 127).
 *         False if the character is outside the ASCII range.
 */
bool	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
