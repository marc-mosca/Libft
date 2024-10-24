/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:29:36 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:39:56 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a printable ASCII character.
 *
 * This function checks whether the provided character is a printable ASCII
 * character. Printable characters include all visible characters from
 * space (' ') to tilde ('~'), corresponding to ASCII values 32 through 126.
 *
 * @param c The character to be checked, passed as an integer.
 *
 * @return True if the character is a printable character.
 *         False if the character is not printable (e.g., control characters).
 */
bool	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
