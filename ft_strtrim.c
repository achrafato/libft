/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:11:19 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/05 13:18:54 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_in(char *trim, int start, int end, char const *s1)
{
	int	i;

	i = 0;
	while (start <= end && s1[start])
		trim[i++] = s1[start++];
	trim[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	end = len - 1;
	start = 0;
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	if (start >= len)
		return (ft_strdup("\0"));
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trim = (char *)malloc((end - start + 1) + 1);
	if (!trim)
		return (NULL);
	fill_in(trim, start, end, s1);
	return (trim);
}
