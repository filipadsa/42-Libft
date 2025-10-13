/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:38:51 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 19:29:48 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
<<<<<<< HEAD
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
=======
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (*(unsigned const char *)s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
>>>>>>> 01b86dc15c9ff05cd42d4862dfe8d0ad480e91d3
		return ((char *)s);
	return (NULL);
}
