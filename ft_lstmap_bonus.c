/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:49:21 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/14 10:12:33 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_list;

	if (!lst || !f)
		return (0);
	new_list = NULL;
	head = new_list;
	while (lst)
	{
		new_list = (t_list *)malloc(sizeof(t_list));
		if (!new_list)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_list->content = f(lst->content);
		new_list->next = NULL;
		ft_lstadd_back(&head, new_list);
		lst = lst->next;
		new_list = new_list->next;
	}
	return (head);
}
