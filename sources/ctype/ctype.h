/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctype.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:14:29 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:56:44 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTYPE_H
# define CTYPE_H

// MARK: - Includes

# include <stdbool.h>

// MARK: - Defines

# define ALPHABET_SIZE 26
# define DELETE_CHARACTER 0x7F
# define DIGIT_SIZE 10

// MARK: - Prototypings

bool	ft_isalnum(int character);
bool	ft_isalpha(int character);
bool	ft_isascii(int character);
bool	ft_isdigit(int character);
bool	ft_islower(int character);
bool	ft_isprint(int character);
bool	ft_isspace(int character);
bool	ft_isupper(int character);
int		ft_tolower(int character);
int		ft_toupper(int character);

#endif // CTYPE_H
