/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:04:19 by oqatim            #+#    #+#             */
/*   Updated: 2022/05/21 23:49:14 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	int	i;
	int	*tmp;

	i = -1;
	tmp = malloc(sizeof(int) * stack->nb);
	while (++i < stack->nb - 1)
		tmp[i + 1] = stack->stack_a[i];
	tmp[0] = stack->stack_a[stack->nb - 1];
	i = -1;
	while (++i < stack->nb)
		stack->stack_a[i] = tmp[i];
	free (tmp);
}

void	rrb(t_stack *stack)
{
	int	i;
	int	*tmp;

	i = -1;
	tmp = malloc(sizeof(int) * stack->nb);
	while (++i < stack->nb - 1)
		tmp[i + 1] = stack->stack_b[i];
	tmp[0] = stack->stack_b[stack->nb - 1];
	i = -1;
	while (++i < stack->nb)
		stack->stack_b[i] = tmp[i];
	free (tmp);
}

void	pb(t_stack *stack)
{
	int	i;

	i = -1;
	if (stack->count == 0)
	{
		stack->stack_b[stack->top_b] = stack->stack_a[stack->top_a];
		stack->count++;
		while (++i < stack->nb)
			stack->stack_a[i] = stack->stack_a[i + 1];
		stack->nb--;
	}
	else
	{
		while (++i < stack->nb)
			stack->stack_b[i + 1] = stack->stack_b[i];
		i = -1;
		stack->stack_b[stack->top_b] = stack->stack_a[stack->top_a];
		stack->count++;
		while (++i < stack->nb)
			stack->stack_a[i] = stack->stack_a[i + 1];
		stack->nb--;
	}
}

void	pa(t_stack *stack)
{
	int	i;

	i = -1;
	if (stack->nb == 0)
	{
		stack->stack_a[stack->top_a] = stack->stack_b[stack->top_b];
		while (++i < stack->count)
			stack->stack_b[i] = stack->stack_b[i + 1];
		stack->nb++;
		stack->count--;
	}
	else
	{
		while (++i < stack->nb)
			stack->stack_a[i + 1] = stack->stack_a[i];
		i = -1;
		stack->stack_a[stack->top_a] = stack->stack_b[stack->top_b];
		stack->nb++;
		while (++i < stack->count)
			stack->stack_b[i] = stack->stack_b[i + 1];
		stack->count--;
	}
}
