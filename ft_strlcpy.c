/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:25:57 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/14 10:49:07 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// i + 1 because strlcpy copies up to dstsize - 1
// to copy n characters from src to dst including NULL terminator,
// which means if the user insert "3" it must copy 2 characters
// and close with "\0" 

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
