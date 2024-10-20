/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:56:37 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 16:58:47 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;

	p = b;
	while (len > 0)
	{
		*(unsigned char *) b = (unsigned char) c;
		len--;
		b++;
	}
	return (p);
}
