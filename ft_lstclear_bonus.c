/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:03:06 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/22 10:02:24 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		next = temp->next;
		del(temp->content);
		free(temp);
		temp = next;
	}
	*lst = NULL;
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
    t_list *lst = NULL;

    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("first")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("second")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("third")));
    ft_lstiter(lst, print_content);
    printf("NULL\n");
    ft_lstclear(&lst, del_content);
    if (lst == NULL)
        printf("Successfully cleaned!\n");
    return (0);
} */
