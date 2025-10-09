/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:06:53 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/09 13:37:30 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	sum = nmemb * size;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, sum);
	return (ptr);
}
