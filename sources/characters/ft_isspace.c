/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:52:29 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 09:59:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character is a whitespace character.
 *
 * This function determines if the given character `c` is a whitespace
 * character, including spaces (`' '`), tab (`'\t'`), newline (`'\n'`), vertical
 * tab (`'\v'`), form feed (`'\f'`), or carriage return (`'\r'`).
 *
 * @param c The character to check, passed as an integer
 *
 * @return True if `c` is a whitespace character, false otherwise.
 */
bool ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}
