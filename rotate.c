/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 05:37:54 by aortigos          #+#    #+#             */
/*   Updated: 2024/08/13 05:43:18 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = get_bottom(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ft_ra(t_stack **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

void	ft_rb(t_stack **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
