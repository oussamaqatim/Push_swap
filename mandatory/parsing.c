/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:32:40 by oqatim            #+#    #+#             */
/*   Updated: 2022/05/22 01:18:38 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parsing(char *arg)
{
	int	i;
	int	b;

	b = 0;
	i = 0;
	while (arg[i] != 0)
	{
		if (ft_isdigit(arg[i]))
			b = 1;
		if (ft_isdigit(arg[i]) || arg[i] == ' ')
			i++;
		else if (arg[i] == '+' || arg[i] == '-')
		{
			if ((arg[i - 1] != ' ' && i > 0))
				error();
			if (!ft_isdigit(arg[i + 1]))
				error();
			i++;
		}
	}
	if (!b)
		error();
}

int	ft_count_numb(char **arg)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (arg[++i])
	{
		j = 0;
		while (arg[i][j])
		{
			if (ft_isdigit(arg[i][j]) && !ft_isdigit(arg[i][j + 1]))
				count++;
			j++;
		}
	}
	return (count);
}

int	*ft_alloc_tab(char **arg, t_stack *stack)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (arg[++i])
	{
		j = 0;
		while (arg[i][j])
		{
			if ((ft_isdigit(arg[i][j]) && !ft_isdigit(arg[i][j - 1]) && arg[i][j - 1] != '-' && arg[i][j - 1] != '+')
				|| ((arg[i][j] == '-' || arg[i][j] == '+') && !ft_isdigit(arg[i][j - 1])))
			{
				stack->stack_a[count] = ft_atol(&arg[i][j]);
				count++;
			}
			j++;
		}
	}
	// for(int k = 0; k < stack->nb; k++){ printf("{%d}\n", stack->stack_a[k]);}
	return (stack->stack_a);
}

void	ft_check_dup(int *tab, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (tab[i] == tab[j])
				error();
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	len;

	t_stack	stack;
	i = 0;
	while (++i < ac)
	{
		if (!av[i][0])
			error();
		ft_parsing(av[i]);
	}
	len = ft_count_numb(av);
	ft_instialize(&stack, len);
	stack.stack_a = ft_alloc_tab(av, &stack);
	ft_check_dup(stack.stack_a, len);
	for(int k = 0; k < stack.nb; k++){ printf("{%d}\n", stack.stack_a[k]);}
	ft_sort_3(&stack);
	for(int k = 0; k < stack.nb; k++){ printf("===>%d\n", stack.stack_a[k]);}
}