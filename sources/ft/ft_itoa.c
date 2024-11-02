/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:17:54 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:25:05 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of digits required to represent an integer.
 *
 * This function returns the number of characters needed to represent the
 * integer `number`, including space for the sign if `number` is negative.
 *
 * @param number The integer to count digits for.
 *
 * @return The number of digits in `n`, including the sign if applicable.
 */
static size_t	count_digits(int number)
{
	size_t	length;

	length = number <= 0;
	while (number)
	{
		number /= 10;
		length++;
	}
	return (length);
}

/**
 * @brief Populates a string with the characters of a number.
 *
 * This function fills `destination` with the characters representing `num` in
 * reverse, from least significant to most significant digit, terminating the
 * string with `'\0'`.
 *
 * @param destination A pointer to the null-terminated string where digits will
 * be stored.
 * @param num The unsigned integer to convert to a string.
 * @param length The length of the string representation of `num`.
 */
static void		fill_string(char *destination, unsigned int num, size_t length)
{
	destination[length] = '\0';
	while (length--)
	{
		destination[length] = (num % 10) + '0';
		num /= 10;
	}
}

/**
 * @brief Converts an integer to a null-terminated string.
 *
 * This function allocates memory for a string representation of the integer
 * `number` and returns a pointer to it. Handles negative values and the integer
 * limits. If `number` is `INT_MIN`, the string "-2147483648" is returned.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     int number = -123;
 *     char *result = ft_itoa(number);
 *     if (result != NULL) {
 *         // Use the string representation
 *         free(result); // Free when done
 *     }
 *     return (0);
 * }
 * @endcode
 *
 * @param number The integer to convert to a string.
 *
 * @return A pointer to the null-terminated string representing `number`, or
 * `NULL` if allocation fails.
 *
 * @note The returned string should be freed when no longer needed.
 */
char	*ft_itoa(int number)
{
	char			*destination;
	size_t			length;
	unsigned int	num;

	if (number == INT_MAX)
		return (ft_strdup("-2147483648"));
	length = count_digits(number);
	destination = ft_calloc(length + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	if (number < 0)
		destination[0] = '-';
	num = ft_abs(number);
	fill_string(destination + (number < 0), num, length - (number < 0));
	return (destination);
}
