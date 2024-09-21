/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 05:30:07 by aortigos          #+#    #+#             */
/*   Updated: 2024/08/13 05:37:15 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;
	t_stack	*new_tail;

	tail = get_bottom(*stack);
	new_tail = before_bottom(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->next = tmp;
	new_tail->next = NULL;
}

void	ft_rra(t_stack **stack_a)
{
	r_rotate(stack_a);
	ft_putstr("rra\n");
}

void	ft_rrb(t_stack **stack_b)
{
	r_rotate(stack_b);
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	r_rotate(stack_a);
	r_rotate(stack_b);
	ft_putstr("rrr\n");
}
