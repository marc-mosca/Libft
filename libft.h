/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:38:00 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:15:35 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// MARK: - Includes

# include <stdio.h>
# include <stdbool.h>
# include <unistd.h>

// MARK: - Prototypings

bool	ft_isalpha(int c);

int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);

void	ft_bzero(void *s, size_t n);

#endif // LIBFT_H
