/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:15:32 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:26:20 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array and initializes it to zero.
 *
 * This function allocates memory for an array of `count` elements, each of
 * `size` bytes, and initializes all allocated bytes to zero. It returns a
 * pointer to the allocated memory. If the allocation fails, `NULL` is returned.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     int *arr = (int *) ft_calloc(5, sizeof(int));
 *     if (arr != NULL) {
 *         // Use the allocated array
 *         free(arr); // Remember to free the allocated memory after use
 *     }
 *     return (0);
 * }
 * @endcode
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

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	return (ft_memset(ptr, 0, size * count));
}
