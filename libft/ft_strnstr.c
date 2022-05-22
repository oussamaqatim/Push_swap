/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:01:12 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 07:03:40 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	o;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0')
	{
		o = 0;
		while (haystack[i + o] == needle[o] && i + o < len)
		{
			o++;
			if (needle[o] == '\0')
			{
				return ((char *)(&haystack[i]));
			}
		}
		i++;
	}
	return (NULL);
}
