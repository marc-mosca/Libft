/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:46:55 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/02 13:39:56 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

// MARK: - Includes

# include <stdlib.h>
# include <unistd.h>

// MARK: - Prototypings

char	*ft_itoa(int number);
size_t	ft_putchar_fd(char character, int filedescriptor);
char	**ft_split(const char *source, char character);
void	ft_striteri(char *source, void (*func)(unsigned int, char *));
char	*ft_strjoin(const char *source1, const char *source2);
char	*ft_strmapi(const char *source, char (*func)(unsigned int, char));
char	*ft_strtrim(const char *source, const char *set);
char	*ft_substr(const char *source, unsigned int start, size_t length);

#endif // FT_H
