/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 06:22:36 by aortigos          #+#    #+#             */
/*   Updated: 2024/08/13 06:29:01 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	biggest_index(t_stack *stack)
{
	int	index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

void	three_sort(t_stack **stack)
{
	int	biggest;

	if (is_sorted(*stack))
		return ;
	biggest = biggest_index(*stack);
	if ((*stack)->index == biggest)
		ft_ra(stack);
	else if ((*stack)->next->index == biggest)
		ft_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		ft_sa(stack);
}
