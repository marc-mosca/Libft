/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:48:02 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:51:09 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string followed by a newline to the specified file
 * descriptor.
 *
 * This function writes the contents of `source` to the specified
 * `filedescriptor`, followed by a newline character. It returns the total count
 * of characters written, or 1 if only the newline is written when `source` is
 * NULL.
 *
 * @param source Pointer to the string to be written.
 * @param filedescriptor The file descriptor where the string and newline will
 * be output.
 *
 * @return Returns the total number of characters written, including the
 * newline.
 *
 * @note If `filedescriptor` is invalid, the behavior may be undefined.
 */
size_t	ft_putendl_fd(const char *source, int filedescriptor)
{
	size_t	count;

	count = 0;
	count += ft_putstr_fd(source, filedescriptor);
	count += ft_putchar_fd('\n', filedescriptor);
	return (count);
}
