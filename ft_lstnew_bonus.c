/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:54:47 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/16 11:07:26 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* #include <stdio.h>

void del_content(void *content)
{
    free(content);
}

int main(void)
{
  t_list *node = ft_lstnew(ft_strdup("carapau!"));
  if (!node)
    return (1);
  printf("Node: %s\n", (char *)node->content);
  ft_lstdelone(node, del_content);
  return (0);
} */
