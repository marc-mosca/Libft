/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:38:27 by mmosca            #+#    #+#             */
/*   Updated: 2024/10/20 19:14:20 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	i = 0;
	dstlen = ft_strnlen(dst, dstsize);
	while (src[i] != '\0' && dstlen + i + 1 < dstsize)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	if (dstlen != dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}
