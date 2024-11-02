/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:34:19 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:36:54 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string, modifying it in
 * place.
 *
 * This function iterates over each character in `source`, calling the `func`
 * function for each character. The `func` function receives the index of the
 * character and a pointer to the character itself, enabling in-place
 * modification of the string.
 *
 * @param source The input string to be modified.
 * @param func A pointer to a function that takes an unsigned integer index and
 * a pointer to a character, allowing in-place modification of each character.
 */
void	ft_striteri(char *source, void (*func)(unsigned int, char *))
{
	size_t	i;

	if (source == NULL)
		return ;
	i = 0;
	while (source[i] != '\0')
	{
		func(i, &source[i]);
		i++;
	}
}
