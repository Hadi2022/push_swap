/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 05:58:30 by aortigos          #+#    #+#             */
/*   Updated: 2024/08/14 06:30:25 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_init(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;
	int	push;
	int	i;

	push = 0;
	i = 0;
	stack_size = get_stack_size(*stack_a);
	while (stack_size < 6 && i < stack_size && push < stack_size / 2)
	{
		if ((*stack_a)->index <= stack_size / 2)
		{
			ft_pb(stack_a, stack_b);
			push++;
		}
		else
			ft_ra(stack_a);
		i++;
	}
	while (stack_size - push > 3)
	{
		ft_pb(stack_a, stack_b);
		push++;
	}
}

static void	sort_stack(t_stack **stack_a)
{
	int	lowest_p;
	int	stack_size;

	stack_size = get_stack_size(*stack_a);
	lowest_p = position_lowest_index(stack_a);
	if (lowest_p > stack_size / 2)
	{
		while (lowest_p < stack_size)
		{
			ft_rra(stack_a);
			lowest_p++;
		}
	}
	else
	{
		while (lowest_p > 0)
		{
			ft_ra(stack_a);
			lowest_p--;
		}
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	push_init(stack_a, stack_b);
	three_sort(stack_a);
	while (*stack_b)
	{
		get_target_position(stack_a, stack_b);
		cost(stack_a, stack_b);
		cheapest_move(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		sort_stack(stack_a);
}
