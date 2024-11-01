/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:27:36 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 11:48:29 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of digits required to represent an integer.
 *
 * This function returns the number of characters needed to represent the
 * integer `n`, including space for the sign if `n` is negative.
 *
 * @param n The integer to count digits for.
 *
 * @return The number of digits in `n`, including the sign if applicable.
 */
static size_t	count_digits(int n)
{
	size_t	len;

	len = n <= 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * Populates a string with the characters of a number.
 *
 * This function fills `str` with the characters representing `num` in reverse,
 * from least significant to most significant digit, terminating the string with
 * `'\0'`.
 *
 * @param str A pointer to the null-terminated string where digits will be
 * stored.
 * @param num The unsigned integer to convert to a string.
 * @param len The length of the string representation of `num`.
 */
static void		fill_string(char *str, unsigned int num, size_t len)
{
	str[len] = '\0';
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
}

/**
 * Converts an integer to a null-terminated string.
 *
 * This function allocates memory for a string representation of the integer `n`
 * and returns a pointer to it. Handles negative values and the integer limits.
 * If `n` is `INT_MIN`, the string "-2147483648" is returned.
 *
 * @param n The integer to convert to a string.
 *
 * @return A pointer to the null-terminated string representing `n`, or `NULL`
 * if allocation fails.
 */
char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	num = n;
	if (n < 0)
		num = -n;
	fill_string(str + (n < 0), num, len - (n < 0));
	return (str);
}
