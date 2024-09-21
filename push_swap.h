/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 06:50:52 by aortigos          #+#    #+#             */
/*   Updated: 2024/08/15 06:26:49 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

// Sorts
void		three_sort(t_stack **stack);
void		sort(t_stack **stack_a, t_stack **stack_b);

void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void		cost(t_stack **stack_a, t_stack **stack_b);
void		cheapest_move(t_stack **stack_a, t_stack **stack_b);

// Swap
void		ft_sa(t_stack **stack_a);
void		ft_sb(t_stack **stack_b);
void		ft_ss(t_stack **stack_a, t_stack **stack_b);
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_ra(t_stack **stack_a);
void		ft_rb(t_stack **stack_b);
void		ft_rr(t_stack **stack_a, t_stack **stack_b);
void		ft_rra(t_stack **stack_a);
void		ft_rrb(t_stack **stack_b);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b);

// Stack
t_stack		*stack_new(int value);
void		stack_add(t_stack **stack, t_stack *new);
t_stack		*get_bottom(t_stack *stack);
t_stack		*before_bottom(t_stack *stack);

// Utils
void		free_stack(t_stack **stack);
void		error_exit(t_stack **stack_a, t_stack **stack_b);

long int	ft_atoi(const char *str);
void		ft_putstr(char *str);
int			abs(int nb);
size_t		ft_strlen(const char *str);

char		**ft_split(char const *s, char c);

// Utils Stack

long		input_is_correct(char *str);
int			is_duplicated(t_stack *column);
void		get_index(t_stack *stack_a, int stack_size);

int			position_lowest_index(t_stack **stack);
void		get_target_position(t_stack **stack_a, t_stack **stack_b);
int			get_stack_size(t_stack *stack);
int			is_sorted(t_stack *stack);

#endif
