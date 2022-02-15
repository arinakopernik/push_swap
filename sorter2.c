/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:41:07 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/02 12:41:07 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted_go_down(t_all *all)
{
	all->stack_a->flag = -1;
	ra(all, 1);
}

int	search_near_sorted_b(t_all *all)
{
	int	min;

	min = all->stack_a->prev->index + 1;
	if (all->stack_b->index == min)
	{
		pa(all, 1);
		sorted_go_down(all);
		return (1);
	}
	else if (all->stack_a->index == min)
		sorted_go_down(all);
	else if (all->stack_a->next->index == min)
	{
		sa(all, 1);
		sorted_go_down(all);
	}
	return (0);
}

void	b_mmm(t_all *all)
{
	int	min;
	int	max;
	int	a;

	if (all->len_b == 0)
		return ;
	a = all->len_b;
	min = all->stack_b->index;
	max = all->stack_b->index;
	while (a > 0)
	{
		if (min > all->stack_b->index)
			min = all->stack_b->index;
		if (max < all->stack_b->index)
			max = all->stack_b->index;
		all->stack_b = all->stack_b->next;
		a--;
	}
	all->min = min;
	all->max = max;
	all->med = (min + max) / 2;
}

void	go_b_to_a(t_all *all)
{
	int	a;

	a = all->len_b;
	b_mmm(all);
	while (a-- > 0)
	{
		if (search_near_sorted_b(all))
			continue ;
		if (all->stack_b->index > all->med)
		{
			all->stack_b->flag++;
			pa(all, 1);
		}
		else
		{
			all->stack_b->flag++;
			rb(all, 1);
		}
	}
}
