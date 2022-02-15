/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:49:00 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/15 14:10:57 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_all *all)
{
	int		a;
	t_stack	*check;

	check = all->stack_a;
	a = all->len_a;
	while (a > 1)
	{
		if (check->index > check->next->index)
			return (0);
		check = check->next;
		a--;
	}
	return (1);
}

void	sorted_go_a(t_all *all)
{
	while (all->stack_b->prev->flag == -1)
		rrb(all, 1);
	while (all->stack_b->flag == -1)
	{
		pa(all, 1);
		ra(all, 1);
	}
}

void	a_mmm(t_all *all)
{
	int	min;
	int	max;
	int	a;

	if (all->len_a == 0)
		return ;
	a = all->len_a;
	min = all->stack_a->index;
	max = all->stack_a->index;
	while (a > 0)
	{
		if (min > all->stack_a->index)
			min = all->stack_a->index;
		if (max < all->stack_a->index)
			max = all->stack_a->index;
		all->stack_a = all->stack_a->next;
		a--;
	}
	all->min = min;
	all->max = max;
	all->med = (min + max) / 2;
}

void	first_move(t_all *all)
{
	int	a;

	a = all->len_a;
	a_mmm(all);
	while (a > 0)
	{
		if (all->stack_a->index <= all->med)
		{
			pb(all, 1);
			if (all->stack_b->index == all->min)
			{
				all->stack_b->flag = -1;
				rb(all, 1);
			}
		}
		else
		{
			if (all->len_b == all->max - all->med + 1)
				break ;
			else
				ra(all, 1);
		}
		a--;
	}
	sorted_go_a(all);
}
