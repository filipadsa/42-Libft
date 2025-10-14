/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:21:09 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 14:20:32 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>

void	to_uppercase(unsigned int i, char *c)
{
	(void)i;
  *c = ft_toupper(*c);
}

int main()
{
  char  s[] = "ola";

  ft_striteri(s, to_uppercase);
  printf("%s", s);
  return (0);
} */
