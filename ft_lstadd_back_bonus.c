/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:09:38 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 16:01:11 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_bonus(t_list **head, t_list *new)
{
	t_list	*temp;

	if (!head || !new)
		return ;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	new->next = NULL;
}

/* #include <stdio.h>

void  print_content(void *content)
{
    printf("%s -> ", (char *)content);
}

int main()
{
  t_list  *head = NULL;
  t_list  *temp;

  ft_lstadd_back_bonus(&head, ft_lstnew_bonus("fisrt"));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus("second"));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus("third"));
  ft_lstiter_bonus(head, print_content);
  printf("NULL\n");
  while (head)
  {
    temp = head->next;
    free(head);
    head = temp;
  }
  return (0);
} */
