/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:29:26 by mmosca            #+#    #+#             */
/*   Updated: 2024/11/01 17:30:54 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *source, int character, size_t length)
{
	const unsigned char	*src;

	src = source;
	character = (unsigned char) character;
	while (length > 0)
	{
		length--;
		if (src[length] == character)
			return ((void *) src + length);
	}
	return (NULL);
}
