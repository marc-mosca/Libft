/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:37:30 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:41:28 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a single character to the specified file descriptor.
 *
 * This function sends the specified `character` to the output indicated by
 * `filedescriptor`. Useful for writing individual characters to a file or
 * output stream. If the write operation fails, the function does not handle
 * errors and simply returns 1.
 *
 * @param character The character to be written.
 * @param filedescriptor The file descriptor where the character will be output.
 *
 * @return Returns 1 to indicate a single byte has been written.
 *
 * @note Ensure `filedescriptor` is valid, as an invalid descriptor may result
 * in undefined behavior.
 */
size_t	ft_putchar_fd(char character, int filedescriptor)
{
	write(filedescriptor, &character, 1);
	return (1);
}
