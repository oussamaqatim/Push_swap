/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:15:18 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/05 03:48:31 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*c;
	size_t	i;

	if (!s)
		return (NULL);
	str = (char *) s;
	i = 0;
	c = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!c)
		return (NULL);
	while (str[i] != '\0')
	{
		c[i] = f(i, str[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
