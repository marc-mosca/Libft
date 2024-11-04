/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:38:17 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:40:46 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of elements in a linked list.
 *
 * This function iterates through the linked list, incrementing a counter for
 * each element encountered, until it reaches the end of the list.
 *
 * @param lst A pointer to the first element of the list. The list is traversed
 * starting from this element to count all elements.
 *
 * @return The total number of elements in the list.
 */
size_t	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
