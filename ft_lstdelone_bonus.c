/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:17:48 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/22 10:02:57 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
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
int main(void)
{
  t_list  *head = NULL;
  t_list  *second = NULL;
  t_list  *temp = NULL;

  ft_lstadd_back(&head, ft_lstnew(ft_strdup("first")));
  second = ft_lstnew(ft_strdup("second"));
  ft_lstadd_back(&head, second);
  ft_lstadd_back(&head, ft_lstnew(ft_strdup("third")));
  printf("Before delone:\n");
  ft_lstiter(head, print_content);
  printf("NULL\n");
  temp = second->next;
  ft_lstdelone(second, del_content);
  head->next = temp;
  printf("After delone second lst:\n");
  ft_lstiter(head, print_content);
  printf("NULL\n");
  return (0);
} */
