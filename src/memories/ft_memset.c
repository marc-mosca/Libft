/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:56:47 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 18:00:33 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a block of memory with a specified value.
 *
 * This function sets the first `len` bytes of the memory area pointed to by `b`
 * to the specified value `c` (converted to an unsigned char). It then returns
 * the original pointer to the memory area.
 *
 * @param b A pointer to the memory area to be filled.
 * @param c The value to be set, interpreted as an unsigned char.
 * @param len The number of bytes to be set in the memory area.
 *
 * @return A pointer to the memory area `b` after the operation.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;

	p = b;
	while (len > 0)
	{
		*(unsigned char *) b = (unsigned char) c;
		len--;
	}
	return (p);
}
