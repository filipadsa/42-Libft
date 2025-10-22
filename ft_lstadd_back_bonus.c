/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:09:38 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/22 10:02:08 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

/* #include <stdio.h>

void  print_content(void *content)
{
    printf("%s -> ", (char *)content);
}

int main()
{
  t_list  *lst = NULL;
  t_list  *temp;

  ft_lstadd_back(&lst, ft_lstnew("fisrt"));
  ft_lstadd_back(&lst, ft_lstnew("second"));
  ft_lstadd_back(&lst, ft_lstnew("third"));
  ft_lstiter(lst, print_content);
  printf("NULL\n");
  while (lst)
  {
    temp = lst->next;
    free(lst);
    lst = temp;
  }
  return (0);
} */
