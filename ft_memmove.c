/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:41:27 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/13 20:53:55 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*des;
	unsigned char	*source;

	if (!dst && !src)
		return (NULL);
	des = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst > src)
		while (len-- > 0)
			des[len] = source[len];
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
