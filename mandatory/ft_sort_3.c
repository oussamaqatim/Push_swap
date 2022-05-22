/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:18:20 by oqatim            #+#    #+#             */
/*   Updated: 2022/05/22 03:01:34 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_3(t_stack *stack)
{
	if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[1] > stack->stack_a[2] && stack->stack_a[0] > stack->stack_a[2])
	{
		ra(stack);
		ra(stack);
	}
	else if(stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[1] < stack->stack_a[2] && stack->stack_a[0] < stack->stack_a[2])
		sa(stack);
	else if (stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[1] > stack->stack_a[2] && stack->stack_a[0] > stack->stack_a[2])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->stack_a[0] > stack->stack_a[1] && stack->stack_a[1] < stack->stack_a[2] && stack->stack_a[0] > stack->stack_a[2])
		ra(stack);
	else if (stack->stack_a[0] < stack->stack_a[1] && stack->stack_a[1] > stack->stack_a[2] && stack->stack_a[0] < stack->stack_a[2])
	{
		rra(stack);
		sa(stack);
	}
}

void	ft_sort_5(t_stack *stack)
{
		    
}