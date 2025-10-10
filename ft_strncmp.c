/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:34:41 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 13:47:39 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned const char	*us1;
	unsigned const char	*us2;

	i = 0;
	us1 = (unsigned const char *)s1;
	us2 = (unsigned const char *)s2;
	while (i < n && us1[i] && us2[i] && us1[i] == us2[i])
		i++;
	if (i == n)
		return (0);
	return (us1[i] - us2[i]);
}
