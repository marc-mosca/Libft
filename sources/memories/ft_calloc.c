/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:04:10 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 10:07:53 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array and initializes it to zero.
 *
 * This function allocates memory for an array of `count` elements, each of
 * `size` bytes, and initializes all allocated bytes to zero. It returns a
 * pointer to the allocated memory. If the allocation fails, `NULL` is returned.
 *
 * @param count The number of elements to allocate.
 * @param size The size of each element in bytes.
 *
 * @return A pointer to the allocated memory block initialized to zero, or
 * `NULL` if allocation fails.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, count * size));
}
