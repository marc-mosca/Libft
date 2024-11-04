/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:50:18 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:54:24 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees all elements of a linked list.
 *
 * This function iterates through the linked list pointed to by `alst`, deleting
 * and freeing each element using the `ft_lstdelone` function. The `del`
 * function is applied to free the content of each element. After the list is
 * cleared, `*alst` is set to NULL to indicate that the list is now empty.
 *
 * @param alst A pointer to the pointer of the first element of the list.
 * @param del A function pointer to a function that takes a void pointer as a
 * parameter and frees the content of each element.
 */
void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list	*list;
	t_list	*tmp;

	list = *alst;
	if (list == NULL)
		return ;
	while (list->next != NULL)
	{
		tmp = list->next;
		ft_lstdelone(list, del);
		list = tmp;
	}
	ft_lstdelone(list, del);
	*alst = NULL;
}
