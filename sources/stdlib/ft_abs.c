/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:58:31 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 12:29:46 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Absolute value of an integer.
 *
 * This function returns the positive value of `integer`, negating it if
 * necessary.
 *
 * @param integer The integer to get the absolute value of.
 *
 * @return The absolute value of the input integer.
 */
int	ft_abs(int integer)
{
	if (integer < 0)
		return (-integer);
	return (integer);
}
