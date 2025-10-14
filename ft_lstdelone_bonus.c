/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:17:48 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 15:40:53 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone_bonus(t_list *node, void (*del)(void*))
{
	if (!node)
		return ;
	if (del)
		del(node->content);
	free(node);
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

  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("first")));
  second = ft_lstnew_bonus(ft_strdup("second"));
  ft_lstadd_back_bonus(&head, second);
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("third")));
  printf("Before delone:\n");
  ft_lstiter_bonus(head, print_content);
  printf("NULL\n");
  temp = second->next;
  ft_lstdelone_bonus(second, del_content);
  head->next = temp;
  printf("After delone second node:\n");
  ft_lstiter_bonus(head, print_content);
  printf("NULL\n");
  return (0);
} */
