/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:04:11 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 15:41:11 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast_bonus(t_list *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

#include <stdio.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
  t_list  *head = NULL;
  t_list  *last = NULL;

  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("first")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("second")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("third")));
  last = ft_lstlast_bonus(head);
  if (last)
    printf("Last node: %s\n", (char *)last->content);
  else
    printf("List is empty\n");
  t_list *tmp;
  while (head)
  {
    tmp = head->next;
    free(head->content);
    free(head);
    head = tmp;
  }
  return (0);
}

