/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:12:26 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 16:02:55 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;

	if (!node || !f)
		return (NULL);
	newlst = NULL;
	new = NULL;
	while (node)
	{
		new = ft_lstnew_bonus(f(node->content));
		if (!new)
		{
			ft_lstclear_bonus(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&newlst, new);
		node = node->next;
	}
	return (newlst);
}

#include <stdio.h>

void *duplicate_content(void *content)
{
  char *str = (char *)content;
  return ft_strdup(str);
}

void del_content(void *content)
{
  free(content);
}

void print_content(void *content)
{
  printf("%s -> ", (char *)content);
}

int main(void)
{
  t_list  *head = NULL;
  t_list  *mapped = NULL;
  t_list  *temp;

  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("first")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("second")));
  ft_lstadd_back_bonus(&head, ft_lstnew_bonus(ft_strdup("third")));
  printf("Original list:\n");
  temp = head;
  while (temp)
  {
    print_content(temp->content);
    temp = temp->next;
  }
  printf("NULL\n");
  mapped = ft_lstmap_bonus(head, duplicate_content, del_content);
  printf("Mapped list:\n");
  temp = mapped;
  while (temp)
  {
    print_content(temp->content);
    temp = temp->next;
  }
  printf("NULL\n");
  ft_lstclear_bonus(&head, del_content);
  ft_lstclear_bonus(&mapped, del_content);
  return (0);
}


