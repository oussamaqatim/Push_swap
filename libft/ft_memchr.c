/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:00:04 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 17:24:19 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	j;
	char	*atr;

	if (!s)
		return (NULL);
	atr = (char *)s;
	j = 0;
	while (j < n)
	{
		if (atr[j] == (char)c)
		{
			return (&atr[j]);
		}
		j++;
	}
	return (NULL);
}
