/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filda-si <filda-si@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:38:47 by filda-si          #+#    #+#             */
/*   Updated: 2025/10/13 13:54:28 by filda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len-- >= needle_len)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
  const char  *haystack = "carapau";
  const char  *needle = "apa";
  size_t      len = ft_strlen(haystack);
  char        *result;

  result = ft_strnstr(haystack, needle, len);
  if (!result)
    return (1);
  printf("%s", result);
  return (0);
} */
