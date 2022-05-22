/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 04:57:03 by oqatim            #+#    #+#             */
/*   Updated: 2022/04/28 16:47:06 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	else if (src < dst)
	{
		while (len--)
		{
			dst1[i + len] = src1[i + len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
