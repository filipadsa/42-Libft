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
<<<<<<< HEAD
	size_t			i;
	unsigned char	*ptr;
=======
	unsigned char	*p;
>>>>>>> 01b86dc15c9ff05cd42d4862dfe8d0ad480e91d3

	p = (unsigned char *)mem;
	while (len--)
		*p++ = 0;
}
