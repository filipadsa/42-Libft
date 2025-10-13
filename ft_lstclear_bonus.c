/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:03:06 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 15:40:42 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear_bonus(t_list **head, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next;

	if (!head || !del)
		return ;
	temp = *head;
	while (temp)
	{
		next = temp->next;
		del(temp->next);
		free(temp);
		temp = next;
	}
	*head = NULL;
}
