/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:20:26 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/03 11:20:26 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_in_b_for_a(t_all *all)
{
	int	a;
	int	b;
	int	c;

	if (all->len_b == 0)
		return ;
	a = all->stack_b->index;
	b = all->stack_b->next->index;
	c = all->stack_b->prev->index;
	if (b > a && b > c)
		rrb(all, 1);
	else if (a > b && a > c)
		rb(all, 1);
	a = all->stack_b->index;
	b = all->stack_b->next->index;
	if (a > b)
		sb(all, 1);
}

void	sort_stack_a2(t_all *all, int f)
{
	sort_in_b_for_a(all);
	if (all ->stack_a->index > all->stack_a->next->index && \
		all->stack_a->flag == all->stack_a->next->flag)
		sa(all, 1);
	while (all->len_b != 0)
	{
		if (all->stack_a->index > all->stack_b->index || \
		all->stack_a->flag != f)
		{
			pa(all, 1);
			sorted_go_down(all);
		}
		else
			sorted_go_down(all);
	}
	while (f == all->stack_a->flag && f != -1)
		sorted_go_down(all);
}

void	sort_stack_a(t_all *all, int a, int flag, int index)
{
	t_stack	*temp;

	index = all->stack_a->prev->index + 1;
	flag = all->stack_a->flag;
	temp = all->stack_a;
	while (temp->flag == flag && flag != -1)
	{
		temp = temp->next;
		a++;
	}
	if (a <= 5)
	{
		while (a > 2)
		{
			if (index == all->stack_a->index)
			{
				sorted_go_down(all);
				index++;
			}
			else
				pb(all, 1);
			a--;
		}
		sort_stack_a2(all, flag);
	}
}

void	go_a_to_b(t_all *all)
{
	int	c;
	int	flag;

	flag = all->stack_a->flag;
	while (all->stack_a->flag == flag && flag != -1)
	{
		c = all->stack_a->prev->index + 1;
		if (all->len_b > 1)
			search_near_sorted_a(all);
		if (c == all->stack_a->index)
			sorted_go_down(all);
		else
			pb(all, 1);
	}
}

void	search_near_sorted_a(t_all *all)
{
	int	num;

	num = all->stack_a->prev->index + 1;
	if (num == all->stack_a->next->index)
	{
		sa(all, 1);
		sorted_go_down(all);
	}
	else if (num == all->stack_b->index)
	{
		pa(all, 1);
		sorted_go_down(all);
	}
	else if (num == all->stack_b->next->index)
	{
		sb(all, 1);
		pa(all, 1);
		sorted_go_down(all);
	}
	else if (num == all->stack_b->prev->index)
	{
		rrb(all, 1);
		pa(all, 1);
		sorted_go_down(all);
	}
}
