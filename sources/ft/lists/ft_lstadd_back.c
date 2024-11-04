/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:44:05 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:47:53 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new element to the end of a linked list.
 *
 * This function first checks if the list is empty. If so, the new element is
 * added as the first element. Otherwise, it traverses the list to find the last
 * element and appends the new element to the end of the list.
 *
 * @param alst A double pointer to the first element of the list. If the list is
 * empty, the new element will become the first element.
 * @param new A pointer to the new element to be added to the list.
 */
void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	last = ft_lstlast(*alst);
	last->next = new;
}
