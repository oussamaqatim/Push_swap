/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 04:49:02 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/09 01:48:10 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**free_table(int index, char **tab)
{
	while (index-- >= 0)
		free(tab[index]);
	free(tab);
	return (NULL);
}

int	hsab_calimat(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			words++;
		}
		i++;
	}
	return (words);
}

int	hsab_toul(const char *str, char c)
{
	int	n;

	n = 0;
	while (str[n] != c && str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	**add_to_table(const char *s, int c, int words, char **arr)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = hsab_toul(s, c);
		arr[i] = (char *)malloc((len) * sizeof(char) + 1);
		if (arr == NULL)
			return (free_table(i, arr));
		j = 0;
		while (j < len)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nb_words;
	char	**res;

	if (s == NULL)
		return (NULL);
	i = 0;
	nb_words = hsab_calimat(s, c);
	res = (char **)malloc((nb_words) * sizeof(char *) + 1);
	if (res == NULL)
		return (NULL);
	add_to_table(s, c, nb_words, res);
	return (res);
}
