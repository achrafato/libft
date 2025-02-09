/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:44:15 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/14 10:18:47 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*successor;

	if (!lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		if (ptr)
		{
			successor = ptr->next;
			if (del)
				del(ptr->content);
			free(ptr);
			ptr = successor;
		}
	}
	*lst = NULL;
}
