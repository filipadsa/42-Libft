/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:51:54 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 11:28:29 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)mem;
	i = 0;
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
}
