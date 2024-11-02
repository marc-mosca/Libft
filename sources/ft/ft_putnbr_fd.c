/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:53:48 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:57:23 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes an integer to the specified file descriptor.
 *
 * This function writes the integer `number` to `filedescriptor`. If `number` is
 * negative, a minus sign is written before the digits. It handles the recursive
 * conversion of each digit in `number` to its corresponding ASCII character and
 * writes them sequentially.
 *
 * @param number The integer to be written.
 * @param filedescriptor The file descriptor to write the integer to.
 *
 * @return Returns the total number of characters written, including the sign if
 * negative.
 *
 * @note If `filedescriptor` is invalid, the behavior may be undefined.
 */
size_t	ft_putnbr_fd(int number, int filedescriptor)
{
	unsigned int	num;
	size_t			count;

	count = 0;
	num = number;
	if (number < 0)
	{
		count += ft_putchar_fd('-', filedescriptor);
		num = -number;
	}
	if (num > 9)
		count += ft_putnbr_fd(num / 10, filedescriptor);
	count += ft_putchar_fd(num % 10 + '0', filedescriptor);
	return (count);
}
