/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:53:52 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:13:35 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string `source` to an
 * integer, considering leading whitespaces and an optional `+` or `-` sign.
 * The conversion stops at the first non-numeric character.
 *
 * - Leading whitespace characters are skipped.
 * - If a sign character (`+` or `-`) is present, it affects the integer's sign.
 * - For numeric characters, the function accumulates the integer value.
 * - If the result overflows `INT_MAX`, it returns -1; if it underflows
 * `INT_MIN`, it returns 0.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     int result = ft_atoi("   -42");		// Result is -42
 *     result = ft_atoi("4193 with words");		// Result is 4193
 *     result = ft_atoi("words 123");		// Result is 0 (no valid conversion)
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to convert.
 *
 * @return The converted integer value. If an overflow or underflow occurs,
 * returns -1 or 0, respectively.
 */
int	ft_atoi(const char *source)
{
	int		n;
	bool	neg;

	n = 0;
	neg = false;
	while (ft_isspace(*source) == true)
		source++;
	if (*source == '-' || *source == '+')
	{
		if (*source == '-')
			neg = true;
		source++;
	}
	while (ft_isdigit(*source) == true)
	{
		n = n * 10 - (*source - '0');
		source++;
	}
	if (neg == true)
		return (n);
	return (-n);
}
