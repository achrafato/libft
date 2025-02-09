/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:17:22 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/11 19:02:49 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_blocks, size_t block_byte)
{
	size_t	total;
	void	*ptr;

	if ((int)num_blocks < 0 || (int)block_byte < 0)
		return (NULL);
	total = num_blocks * block_byte;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (num_blocks * block_byte));
	return (ptr);
}
