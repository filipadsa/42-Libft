/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:04:11 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/22 10:03:16 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* #include <stdio.h>

void	print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int	main(void)
{
  t_list	*head = NULL;
  t_list	*last = NULL;
  t_list	*tmp;

  ft_lstadd_back(&head, ft_lstnew(ft_strdup("first")));
  ft_lstadd_back(&head, ft_lstnew(ft_strdup("second")));
  ft_lstadd_back(&head, ft_lstnew(ft_strdup("third")));
  last = ft_lstlast(head);
  if (last)
  	printf("Last lst: %s\n", (char *)last->content);
  else
  	printf("List is empty\n");
  while (head)
  {
  	tmp = head->next;
	free(head->content);
	free(head);
	head = tmp;
  }
  return (0);
} */
