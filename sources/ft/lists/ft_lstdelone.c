/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:48:17 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:49:53 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes a single element of a linked list.
 *
 * This function deletes the element `lst` by applying the `del` function to its
 * content, and then frees the memory of the element itself. It does not free
 * the memory of the next elements in the list.
 *
 * @param lst A pointer to the element to be deleted.
 * @param del A function pointer to a function that takes a void pointer as a
 * parameter and frees the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
