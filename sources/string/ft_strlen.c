/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:50:56 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:24:47 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of the given null-terminated string.
 *
 * This function calculates the length of the string by counting the number of
 * characters before the terminating null character.
 *
 * Exemple:
 * @code{.c}
 * int main(void)
 * {
 *     const char *str = "Hello, World!";
 *     size_t len = ft_strlen(str);	// Length is 13.
 *     return (0);
 * }
 * @endcode
 *
 * @param source A pointer to the null-terminated string whose length is to be
 * computed.
 *
 * @return The number of characters in the string excluding the null terminator.
 *
 * @note This function assumes the input string is properly null-terminated.
 * Passing a non-null-terminated string may lead to undefined behavior.
 */
size_t	ft_strlen(const char *source)
{
	const char	*str;

	str = source;
	while (*source)
		source++;
	return (source - str);
}
