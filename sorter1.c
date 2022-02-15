/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:29:10 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/02 12:29:10 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_b(t_all *all)
{
	int	a;
	int	b;
	int	c;

	a = all->stack_b->value;
	b = all->stack_b->next->value;
	c = all->stack_b->prev->value;
	if (a < b && a < c && b > c)
	{
		rrb(all, 1);
		sb(all, 1);
	}
	else if (a > b && a < c && b < c)
		sb(all, 1);
	else if (a < b && a > c && b > c)
		rrb(all, 1);
	else if (a > b && a > c && b < c)
		rb(all, 1);
	else if (a > b && a > c && b > c)
	{
		sb(all, 1);
		rrb(all, 1);
	}
}

void	simple_sort_b2(t_all *all, int f)
{
	if (all->len_b == 2)
	{
		if (all->stack_b->index > all->stack_b->next->index)
			sb(all, 1);
	}
	else
		sort_three_b(all);
	if (all->stack_a->index > all->stack_a->next->index && \
		all->stack_a->flag == all->stack_a->next->flag)
		sa(all, 1);
	while (all->len_b != 0)
	{
		if (all->stack_a->index > all->stack_b->index || \
		all->stack_a->flag == -1)
		{	
			pa(all, 1);
			sorted_go_down(all);
		}
		else
			sorted_go_down(all);
	}
	while (f == all->stack_a->flag && f != -1 && \
	all->stack_a->index + 1 == all->stack_a->prev->index)
		sorted_go_down(all);
}

void	simple_sort_b(t_all *all)
{
	int		index;
	int		flag;
	int		a;

	a = all->len_b;
	index = all->stack_a->prev->index + 1;
	flag = all->stack_a->flag;
	while (a > 3)
	{
		if (index == all->stack_b->index)
		{
			pa(all, 1);
			sorted_go_down(all);
			index++;
		}
		else
			pa(all, 1);
		a--;
	}
	simple_sort_b2(all, flag);
}
