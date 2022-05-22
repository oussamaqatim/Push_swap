/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 03:11:41 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/03 22:29:46 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*c;

	s = (unsigned char *) s1;
	c = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != c[i])
		{
			return (s[i] - c[i]);
		}
		i++;
	}
	return (0);
}
