/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:35:31 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/15 09:55:13 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int byte, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)mem;
	while (i < len)
	{
		ptr[i] = (unsigned char)byte;
		i++;
	}
	return (mem);
}

/* #include <stdio.h>

int main()
{
  char    mem[] = {'A', 'B', 'C', '\0'};
  int     byte = 'F';
  size_t  len = 2;

  ft_memset(mem, byte, len);
  printf("%s", mem);
  return (0);
} */
