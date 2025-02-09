/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:26:21 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/14 10:47:49 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	lend;
	size_t	lens;
	size_t	i;
	size_t	total;

	if (!dest && dstsize == 0)
		return (0);
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (lend < dstsize)
		total = lend + lens;
	else
		total = lens + dstsize;
	i = 0;
	if (dstsize == 0)
		return (total);
	while (src[i] && lend + i < dstsize - 1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (total);
}
