/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 05:28:29 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 16:59:23 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	b;
	size_t	r;

	a = ft_strlen(src);
	b = ft_strlen(dst);
	i = 0;
	r = 0;
	if (dstsize == 0)
		return (a);
	if (b < dstsize)
		r = a + b;
	else
		r = dstsize + a;
	while (src[i] && (b + 1) < dstsize)
	{
		dst[b] = src[i];
		i++;
		b++;
	}
	dst[b] = '\0';
	return (r);
}
