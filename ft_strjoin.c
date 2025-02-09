/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:22:17 by aibn-che          #+#    #+#             */
/*   Updated: 2023/10/31 18:24:22 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	int		i;
	int		j;
	char	*arr;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	arr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		arr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		arr[j++] = s2[i++];
	arr[j] = '\0';
	return (arr);
}
