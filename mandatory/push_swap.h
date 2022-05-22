/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:33:05 by oqatim            #+#    #+#             */
/*   Updated: 2022/05/21 04:07:23 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_1337/libft.h"
# include "stdio.h"
# include "unistd.h"
# include <limits.h>

typedef struct s_stack{
	int	*stack_a;
	int	*stack_b;
	int	*stack_s;
	int	top_a;
	int	top_b;
	int	last_a;
	int	last_b;
	int	nb;
	int	count;
	int	count_a;
}	t_stack;

void	error(void);
void	ft_putstr(char *str);
long	ft_atol(const char *str);
void	ft_parsing(char *arg);
int		ft_count_numb(char **arg);
int		*ft_alloc_tab(char **arg, t_stack *stack);
void	ft_check_dup(int *tab, int len);
void	ft_instialize(t_stack *stack, int len);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);
void	ft_sort_3(t_stack *stack);

#endif
