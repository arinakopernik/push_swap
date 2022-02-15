/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:13:23 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 14:45:47 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_all *all, int f)
{
	if (all->len_a > 1)
		all->stack_a = all->stack_a->next;
	if (f)
		ft_putendl_fd("ra", 1);
}

void	rb(t_all *all, int f)
{
	if (all->len_b > 1)
		all->stack_b = all->stack_b->next;
	if (f)
		ft_putendl_fd("rb", 1);
}

void	rr(t_all *all, int f)
{
	ra(all, 0);
	rb(all, 0);
	if (f)
		ft_putendl_fd("rr", 1);
}
