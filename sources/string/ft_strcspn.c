/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:36:50 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 18:45:59 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of the initial segment of `source` not
 * containing any `charset` characters.
 *
 * This function returns the number of characters in the initial segment of
 * `source` that do not appear in `charset`.
 *
 * Example:
 * @code{.c}
 * int main(void)
 * {
 *     char *identifier = "spy007";
 *     char *digits = "1234567890";
 *     int position = ft_strcspn(identifier, digits);
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string to be scanned.
 * @param charset A null-terminated string of characters to search for.
 *
 * @return The number of characters in the initial segment of `s` that do not
 * match `charset`.
 */
size_t	ft_strcspn(const char *source, const char *charset)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (source[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (source[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
