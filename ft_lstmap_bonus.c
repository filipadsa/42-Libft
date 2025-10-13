/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:12:26 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 16:02:55 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;

	if (!node || !f)
		return (NULL);
	newlst = NULL;
	new = NULL;
	while (node)
	{
		new = ft_lstnew_bonus(f(node->content));
		if (!new)
		{
			ft_lstclear_bonus(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&newlst, new);
		node = node->next;
	}
	return (newlst);
}
