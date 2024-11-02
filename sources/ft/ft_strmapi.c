/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:27:43 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:32:48 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string, creating a new
 * mapped string.
 *
 * This function iterates over each character in `source`, applying the `func`
 * function, which takes the character's index and value, and returns a
 * transformed character. The transformed characters are stored in a new
 * dynamically allocated string (`destination`), which is then returned.
 *
 * @param source The input string to be processed.
 * @param func A pointer to a function that takes an unsigned integer index and
 * a character, and returns a modified character.
 *
 * @return A newly allocated string containing the results of applying `func` to
 * each character of `source`, or NULL if allocation fails or if `source` is
 * NULL.
 *
 * @note The caller is responsible for freeing the allocated memory of the
 * returned string.
 */
char	*ft_strmapi(const char *source, char (*func)(unsigned int, char))
{
	char	*destination;
	size_t	i;

	if (source == NULL)
		return (NULL);
	destination = ft_calloc(ft_strlen(source) + 1, sizeof(char));
	if (destination == NULL)
		return (NULL);
	i = 0;
	while (source[i] != '\0')
	{
		destination[i] = func(i, source[i]);
		i++;
	}
	return (destination);
}
