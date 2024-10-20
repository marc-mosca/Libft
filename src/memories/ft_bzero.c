/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:02:14 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 18:06:09 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets a block of memory to zero.
 *
 * This function fills the first `n` bytes of the memory area pointed to by `s`
 * with zero bytes. It is typically used to initialize or reset memory.
 *
 * @param s A pointer to the memory area to be zeroed.
 * @param n The number of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
