/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 05:28:41 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 16:59:30 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	if (dstsize == 0)
		return (ft_strlen(s));
	while (s[i] != '\0' && i < dstsize - 1)
	{
		d[i] = s[i];
		i++;
	}
		d[i] = '\0';
	return (ft_strlen(s));
}
