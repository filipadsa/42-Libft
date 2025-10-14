/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:11:17 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 13:46:50 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*result;

	i = 0;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (len == 0)
	{
		result[0] = '\0';
		return (result);
	}
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* #include <stdio.h>

char	to_uppercase(unsigned int i, char c)
{
	(void)i;
  return (ft_toupper(c));
}

int main()
{
  char const  *s = "ola";
  char        *result;

  result = ft_strmapi(s, to_uppercase);
  if (!result)
    return (1);
  printf("%s", result);
  free(result);
  return (0);
} */
