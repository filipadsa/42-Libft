/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:06:53 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 13:42:57 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	sum = nmemb * size;
	if (sum / nmemb != size)
		return (NULL);
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, sum);
	return (ptr);
}
