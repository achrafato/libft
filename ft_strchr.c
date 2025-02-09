/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:58:45 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/08 21:58:21 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	locates the first occurrence of c 
	(if c is `\0' the functions locate the terminating `\0')
*/ 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (*(s + i) == (char)c)
		return ((char *)(s + i));
	return (0);
}
