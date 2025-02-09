/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:04:33 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/11 17:38:06 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	slen;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)(s + start);
	slen = ft_strlen(str);
	if (slen > len)
		slen = len;
	i = 0;
	str = (char *)malloc((slen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (slen)
	{
		((char *)str)[i++] = s[start];
		start++;
		slen--;
	}
	((char *)str)[i] = '\0';
	return ((char *)str);
}
