/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:59:15 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 15:40:35 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front_bonus(t_list **head, t_list *new)
{
	if (head != NULL && new != NULL)
	{
		new->next = *head;
		*head = new;
	}
}

/* #include <stdio.h>

void print_content(void *content)
{
    printf("%s -> ", (char *)content);
}

int main(void)
{
  t_list *head = NULL;
  t_list *tmp;

  ft_lstadd_front_bonus(&head, ft_lstnew_bonus("third"));
  ft_lstadd_front_bonus(&head, ft_lstnew_bonus("second"));
  ft_lstadd_front_bonus(&head, ft_lstnew_bonus("first"));
  ft_lstiter_bonus(head, print_content);
  printf("NULL");
  while (head)
  {
    tmp = head->next;
    free(head);
    head = tmp;
  }
  return (0);
} */
