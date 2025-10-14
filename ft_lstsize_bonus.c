/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:01:41 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 15:41:28 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize_bonus(t_list *node)
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

  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("first")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("second")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("third")));
  printf("Size: %d\n", ft_lstsize_bonus(head));
  while (head)
  {
    temp = head->next;
    free(head->content);
    free(head);
    head = temp;
  }
  return 0;
} */
