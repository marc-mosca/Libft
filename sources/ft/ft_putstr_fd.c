/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:42:38 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:45:35 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the specified file descriptor.
 *
 * This function writes the contents of `source` to the output indicated by
 * `filedescriptor`. It returns the length of `source`, representing the total
 * number of bytes written. If `source` is NULL, the function returns 0 and no
 * data is written.
 *
 * @param source Pointer to the string to be written.
 * @param filedescriptor The file descriptor where the string will be output.
 *
 * @return Returns the number of characters written, or 0 if `source` is NULL.
 *
 * @note Ensure `filedescriptor` is valid, as an invalid descriptor may result
 * in undefined behavior.
 */
size_t	ft_putstr_fd(const char *source, int filedescriptor)
{
	size_t	source_length;

	if (source == NULL)
		return (0);
	source_length = ft_strlen(source);
	write(filedescriptor, source, source_length);
	return (source_length);
}
