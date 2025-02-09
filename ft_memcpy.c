/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:41 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/14 10:24:28 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	size_t	i;

	if (!to && !from)
		return (NULL);
	i = 0;
	while (i < numBytes)
	{
		((unsigned char *)to)[i] = ((unsigned char *)from)[i];
		i++;
	}
	return (to);
}
