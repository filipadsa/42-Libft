/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:59:15 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/22 10:02:16 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* #include <stdio.h>

void print_content(void *content)
{
    printf("%s -> ", (char *)content);
}

int main(void)
{
  t_list *lst = NULL;
  t_list *tmp;

  ft_lstadd_front(&lst, ft_lstnew("third"));
  ft_lstadd_front(&lst, ft_lstnew("second"));
  ft_lstadd_front(&lst, ft_lstnew("first"));
  ft_lstiter(lst, print_content);
  printf("NULL");
  while (lst)
  {
    tmp = lst->next;
    free(lst);
    lst = tmp;
  }
  return (0);
} */
