/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:02:28 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 17:04:28 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*p;

	if (!dst && !src)
		return (NULL);
	p = dst;
	while (n > 0)
	{
		*(unsigned char *) dst = *(unsigned char *) src;
		dst++;
		src++;
		n--;
	}
	return (p);
}
