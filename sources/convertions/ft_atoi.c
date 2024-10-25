/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:48:56 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 10:01:16 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string to an integer.
 *
 * This function converts the initial portion of the string `str` to an integer
 * (`int`), considering leading whitespaces and an optional `+` or `-` sign.
 * The conversion stops at the first non-numeric character.
 *
 * - Leading whitespace characters are skipped.
 * - If a sign character (`+` or `-`) is present, it affects the integer's sign.
 * - For numeric characters, the function accumulates the integer value.
 * - If the result overflows `INT_MAX`, it returns -1; if it underflows
 * `INT_MIN`, it returns 0.
 *
 * @param str A pointer to the null-terminated string to convert.
 *
 * @return The converted integer value. If an overflow or underflow occurs,
 * returns -1 or 0, respectively.
 */
int	ft_atoi(const char *str)
{
	long	result;
	bool	is_neg;

	result = 0;
	is_neg = false;
	while (ft_isspace(*str) == true)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = true;
		str++;
	}
	while (ft_isdigit(*str) == true)
	{
		if (result > (LONG_MAX - (*str - '0')) / 10)
		{
			if (is_neg == true)
				return (0);
			return (-1);
		}
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * is_neg));
}
