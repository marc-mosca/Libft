/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:23:06 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:25:45 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * @param c The character to be checked, passed as an integer.
 *
 * This function checks whether the provided character is alphanumeric,
 * meaning it is either a letter (uppercase or lowercase) or a numeric digit
 * ('0' to '9').
 *
 * @return True if the character is an alphanumeric character.
 *         False if the character is neither a letter nor a digit.
 */
bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
