/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:44:12 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 11:24:00 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of words in a string separated by a specified delimiter.
 *
 * This helper function counts the total number of words in `s` separated by
 * `c`.
 *
 * @param s A pointer to the null-terminated string to count words in.
 * @param c The character delimiter used to separate words.
 *
 * @return The number of words in the string.
 */
static size_t	word_count(const char *s, const char c)
{
	size_t	total_word;

	total_word = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			total_word++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (total_word);
}

/**
 * Frees memory allocated for a partially completed split string array.
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
 * Splits a string into an array of strings based on a specified delimiter.
 *
 * This function splits the string `s` into an array of words separated by `c`.
 * Each word is a null-terminated string, and the array is also null-terminated.
 * If `s` is `NULL` or allocation fails, `NULL` is returned.
 *
 * @param s A pointer to the null-terminated string to split.
 * @param c The character delimiter used to separate words in the string.
 *
 * @return A null-terminated array of strings, or `NULL` if an error occurs.
 */
char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	total_word_number;
	size_t	word_len;
	size_t	i;

	if (!s)
		return (NULL);
	total_word_number = word_count(s, c);
	array = ft_calloc(total_word_number + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < total_word_number)
	{
		while (*s == c)
			s++;
		word_len = ft_strcspn(s, &c);
		array[i] = ft_strndup(s, word_len);
		if (!array[i])
			return (free_split(array, i));
		s += word_len;
		i++;
	}
	return (array);
}
