/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:15:13 by oqatim            #+#    #+#             */
/*   Updated: 2022/05/16 19:04:37 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	error(void)
{
	ft_putendl_fd("===>Error<===", 2);
	exit(1);
}

long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	n;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i++] - 48; 
		if ((n * sign) > 2147483647 || (n * sign) < -2147483648)
			error();
	}
	return (n * sign);
}

void	ft_instialize(t_stack *stack, int len)
{
	stack->stack_a = malloc(sizeof(int) * len);
	if (!stack->stack_a)
		exit(0);
	stack->stack_b = malloc(sizeof(int) * len);
	if(!stack->stack_b)
		exit(0);
	stack->top_a = 0;
	stack->top_b = stack->stack_b[0];
	stack->last_a = len - 1;
	stack->last_b = len - 1;
	stack->nb = len;
	stack->count = 0;
}
