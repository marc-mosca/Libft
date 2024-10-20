/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:38:00 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:58:52 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// MARK: - Includes

# include <stdbool.h>
# include <stdio.h>

// MARK: - Prototypings

bool	ft_isalnum(int c);
bool	ft_isalpha(int c);
bool	ft_isascii(int c);
bool	ft_isdigit(int c);
bool	ft_isprint(int c);

void	*ft_memset(void *b, int c, size_t len);

size_t	ft_strlen(const char *s);

#endif // LIBFT_H
