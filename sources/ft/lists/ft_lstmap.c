/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:39 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 13:01:40 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list by applying a function to each element's content in
 * the given list.
 *
 * This function iterates over the original list `lst` and applies the function
 * `f` to each element's content, creating a new list with the modified content.
 * If memory allocation fails for any new element, the function `del` is called
 * to free the previously allocated elements, and the function returns NULL. If
 * the original list is empty, it returns NULL.
 *
 * @param lst A pointer to the first element of the list to be mapped.
 * @param f A function pointer that takes a void pointer and returns a new
 * modified pointer.
 * @param del A function pointer to delete the content of an element in case of
 * failure.
 *
 * @return A pointer to the new list, or NULL if memory allocation fails at any
 * point.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	list = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
