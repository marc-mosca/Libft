/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:54:51 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:58:17 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through a linked list and applies a function to the content
 * of each element.
 *
 * This function traverses the linked list pointed to by `lst`, applying the
 * function `f` to the content of each element. It starts from the first element
 * and continues until the end of the list is reached. The function `f` is
 * applied to the content of each node. If the list is empty, the function does
 * nothing.
 *
 * @param lst A pointer to the first element of the list.
 * @param f A function pointer that takes a void pointer as a parameter and
 * performs an operation on it.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;

	if (lst == NULL)
		return ;
	list = lst;
	while (list->next != NULL)
	{
		f(list->content);
		list = list->next;
	}
	f(list->content);
}
