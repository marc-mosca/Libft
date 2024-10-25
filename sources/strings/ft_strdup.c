/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:09:07 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/25 10:13:54 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a string by allocating new memory and copying the contents.
 *
 * This function allocates sufficient memory to hold a duplicate of the string
 * `s1`. The memory for the new string is allocated and initialized to zero, and
 * then the contents of `s1` are copied into it. If the memory allocation fails,
 * the function returns `NULL`.
 *
 * @param s1 A pointer to the null-terminated string to duplicate.
 *
 * @return A pointer to the duplicated string, or `NULL` if memory allocation
 * fails.
 */
char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*ptr;

	s1_len = ft_strlen(s1) + 1;
	ptr = ft_calloc(s1_len, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len);
	return (ptr);
}
