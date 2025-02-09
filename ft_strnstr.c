/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:52:06 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/11 21:26:37 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Find the first occurrence of 'find' in 's', where the search is limited to the
 * first slen characters of s.
 */

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if (!s && len == 0)
		return (0);
	if (*find == '\0')
		return ((char *)s);
	l = ft_strlen(find);
	while (s[i] && i < len)
	{
		j = 0;
		while (i + j < len && find[j] == s[i + j])
		{
			j++;
			if (j == l)
				return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
