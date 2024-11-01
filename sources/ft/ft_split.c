/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:52:57 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 20:57:07 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of words in a string separated by a specified
 * delimiter.
 *
 * This helper function counts the total number of words in `source` separated
 * by `character`.
 *
 * @param source A pointer to the null-terminated string to count words in.
 * @param character The character delimiter used to separate words.
 *
 * @return The number of words in the string.
 */
static size_t	word_count(const char *source, const char character)
{
	size_t	total_word;

	total_word = 0;
	while (*source != '\0')
	{
		while (*source == character)
			source++;
		if (*source != '\0' && *source != character)
		{
			total_word++;
			while (*source != '\0' && *source != character)
				source++;
		}
	}
	return (total_word);
}

/**
 * @brief Frees memory allocated for a partially completed split string array.
 *
 * This helper function frees each allocated string in `array` up to `index`,
 * then frees the array itself. Used to clean up if memory allocation fails.
 *
 * @param array A pointer to an array of strings created by `ft_split`.
 * @param index The current index to stop freeing elements at.
 *
 * @return Always returns `NULL` to simplify error handling in `ft_split`.
 */
static void	*free_split(char **array, size_t index)
{
	while (index > 0)
	{
		free(array[index]);
		index--;
	}
	free(array);
	return (NULL);
}

/**
 * @brief Splits a string into an array of strings based on a specified
 * delimiter.
 *
 * This function splits the string `source` into an array of words separated by
 * `character`. Each word is a null-terminated string, and the array is also
 * null-terminated. If `source` is `NULL` or allocation fails, `NULL` is
 * returned.
 *
 * @param source A pointer to the null-terminated string to split.
 * @param character The character delimiter used to separate words in the
 * string.
 *
 * @return A null-terminated array of strings, or `NULL` if an error occurs.
 */
char	**ft_split(const char *source, char character)
{
	char	**array;
	size_t	total_word_number;
	size_t	word_length;
	size_t	i;

	if (source == NULL)
		return (NULL);
	total_word_number = word_count(source, character);
	array = ft_calloc(total_word_number + 1, sizeof(char *));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < total_word_number)
	{
		while (*source == character)
			source++;
		word_length = ft_strcspn(source, &character);
		array[i] = ft_strndup(source, word_length);
		if (array[i] == NULL)
			return (free_split(array, i));
		source += word_length;
		i++;
	}
	return (array);
}
