/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:08:27 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/15 09:56:27 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_bonus(t_list *node, void (*f)(void *))
{
	if (node && f)
	{
		while (node)
		{
			f(node->content);
			node = node->next;
		}
	}
}

/* #include <stdio.h>

void	print_content(void *content)
{
    printf("%s -> ", (char *)content);
}

void del_content(void *content)
{
    free(content);
}

void	to_uppercase_content(void *content)
{
  int i = 0;
  char *str = (char *)content;

  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
    i++;
  }
}

int	main(void)
{
  t_list *head = NULL;
  t_list *temp;

  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("first")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("second")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("third")));
  printf("Original:\n");
  ft_lstiter_bonus(head, print_content);
  printf("NULL\n");
  ft_lstiter_bonus(head, to_uppercase_content);
  printf("After to_uppercase_content:\n");
  ft_lstiter_bonus(head, print_content);
  printf("NULL\n");
  while (head)
  {
    temp = head->next;
    del_content(head->content);
    free(head);
    head = temp;
  }
  return (0);
} */
