/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:30:20 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:34:52 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list element.
 *
 * This function allocates memory for a new list element using `ft_calloc`. The
 * `content` parameter is assigned to the `content` field of the new element,
 * and the `next` field is initialized to NULL.
 *
 * @param content A pointer to the content to store in the new element.
 *
 * @return Returns a pointer to the newly created list element, or NULL if
 * memory allocation fails.
 *
 * @note It is the caller's responsibility to manage and free the memory for
 * both the list element and the content if necessary.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
