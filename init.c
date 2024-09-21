/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aortigos <aortigos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 05:40:30 by aortigos          #+#    #+#             */
/*   Updated: 2024/08/16 06:36:55 by aortigos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	input_is_correct(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		while (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicated(t_stack *column)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = column;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

void	get_index(t_stack *stack_a, int stack_size)
{
	t_stack	*ptr;
	t_stack	*biggest;
	int		min_value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		biggest = NULL;
		min_value = INT_MIN;
		while (ptr)
		{
			if (ptr->value > min_value && ptr->index == 0)
			{
				min_value = ptr->value;
				biggest = ptr;
			}
			ptr = ptr->next;
		}
		if (biggest != NULL)
			biggest->index = stack_size;
	}
}
