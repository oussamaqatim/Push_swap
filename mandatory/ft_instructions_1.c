/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:56:54 by oqatim            #+#    #+#             */
/*   Updated: 2022/05/21 04:02:50 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	swap;	

	swap = stack->stack_a[stack->top_a];
	stack->stack_a[stack->top_a] = stack->stack_a[stack->top_a + 1];
	stack->stack_a[stack->top_a + 1] = swap;
}

void	sb(t_stack *stack)
{
	int	swap;	

	swap = stack->stack_b[stack->top_b];
	stack->stack_b[stack->top_b] = stack->stack_b[stack->top_b + 1];
	stack->stack_b[stack->top_b + 1] = swap;
}

void	ra(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->stack_a[i];
	while (i < stack->nb - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = tmp;
}

void	rb(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->stack_b[i];
	while (i < stack->nb - 1)
	{
		stack->stack_b[i] = stack->stack_b[i + 1];
		i++;
	}
	stack->stack_b[i] = tmp;
}
