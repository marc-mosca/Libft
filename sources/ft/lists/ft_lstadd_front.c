/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:35:40 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/04 12:35:44 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new element to the beginning of a linked list.
 *
 * This function updates the `next` pointer of the new element to point to the
 * current head of the list, then updates the head to point to the new element.
 *
 * @param alst A double pointer to the first element of the list. If the list is
 * empty, `*alst` should be NULL.
 * @param new A pointer to the new element to be added at the beginning of the
 * list. This element will become the new head of the list.
 *
 * @note The `new` element must not be NULL. The function does not allocate
 * memory for the new element.
 */
void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
