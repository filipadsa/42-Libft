/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:01:41 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/16 11:07:53 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *node)
{
	int	count;

	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}

/* #include <stdio.h>

int main(void)
{
  t_list *head = NULL;
  t_list  *temp;

  ft_lstadd_back(&head, ft_lstnew(ft_strdup("first")));
  ft_lstadd_back(&head, ft_lstnew(ft_strdup("second")));
  ft_lstadd_back(&head, ft_lstnew(ft_strdup("third")));
  printf("Size: %d\n", ft_lstsize(head));
  while (head)
  {
    temp = head->next;
    free(head->content);
    free(head);
    head = temp;
  }
  return 0;
} */
