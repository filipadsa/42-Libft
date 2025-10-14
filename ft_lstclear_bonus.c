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
		del(temp->content);
		free(temp);
		temp = next;
	}
	*head = NULL;
}

/* #include <stdio.h>

void print_content(void *content)
{
    printf("%s -> ", (char *)content);
}

void del_content(void *content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;

    ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("first")));
    ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("second")));
    ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("third")));
    ft_lstiter_bonus(head, print_content);
    printf("NULL\n");
    ft_lstclear_bonus(&head, del_content);
    if (head == NULL)
        printf("Successfully cleaned!\n");
    return (0);
} */
