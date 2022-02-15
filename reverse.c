/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:43:46 by lbrianna          #+#    #+#             */
/*   Updated: 2022/01/24 12:43:46 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_all *all, int f)
{
	if (all->len_a > 1)
		all->stack_a = all->stack_a->prev;
	if (f)
		ft_putendl_fd("rra", 1);
}

void	rrb(t_all *all, int f)
{
	if (all->len_b > 1)
		all->stack_b = all->stack_b->prev;
	if (f)
		ft_putendl_fd("rrb", 1);
}

void	rrr(t_all *all, int f)
{
	ra(all, 0);
	rb(all, 0);
	if (f)
		ft_putendl_fd("rrr", 1);
}
