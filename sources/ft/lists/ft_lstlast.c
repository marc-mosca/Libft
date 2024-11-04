/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:41:30 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:43:21 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of a linked list.
 *
 * This function iterates through the linked list until it finds the last
 * element, which is identified by having its `next` pointer set to NULL.
 *
 * @param lst A pointer to the first element of the list. The list is traversed
 * starting from this element until the last one.
 *
 * @return A pointer to the last element of the list. If the list is empty, the
 * function returns NULL.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
