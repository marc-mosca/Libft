/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:18:23 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 16:20:58 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a block of memory to zero.
 *
 * This function fills the first `length` bytes of the memory area pointed to by
 * `buffer` with zero bytes. It is typically used to initialize or reset memory.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     char buffer[10];
 *     ft_bzero(buffer, 10); // Fills `buffer` with 10 zero bytes.
 *     return (0);
 * }
 * @endcode
 *
 * @param buffer A pointer to the memory area to be zeroed.
 * @param length The number of bytes to set to zero.
 */
void	ft_bzero(void *buffer, size_t length)
{
	ft_memset(buffer, 0, length);
}
