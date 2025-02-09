/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:05:28 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/11 17:13:31 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	long int	rs;
	int			sign;

	i = 0;
	sign = 1;
	rs = 0;
	while (is_space(str[i]))
		i++;
	res = 0;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]))
	{
		res = (10 * res) + (str[i] - '0');
		if (res < rs && sign == -1)
			return (0);
		if (res < rs && sign == 1)
			return (-1);
		i++;
		rs = res;
	}
	return ((int)res * sign);
}
