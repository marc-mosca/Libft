/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:18:38 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:21:35 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a digit.
 *
 * @param c The character to be checked, passed as an integer.
 *
 * This function checks whether the provided character is a numeric digit
 * ('0' to '9'). It uses the ASCII values of the characters to determine if the
 * character is a digit.
 *
 * @return True if the character is a digit (between '0' and '9').
 *         False if the character is not a digit.
 */
bool	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
