/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:54:14 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 20:59:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDLIB_H
# define STDLIB_H

// MARK: - Includes

# include <limits.h>
# include <stdlib.h>

// MARK: - Prototypings

int		ft_abs(int integer);
int		ft_atoi(const char *source);
void	*ft_calloc(size_t count, size_t size);

#endif // STDLIB_H
