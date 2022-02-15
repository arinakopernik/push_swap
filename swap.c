/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:56:42 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 14:45:06 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_all *all, int f)
{
	int	temp;

	if (all->len_a < 2)
		return ;
	temp = all->stack_a->value;
	all->stack_a->value = all->stack_a->next->value;
	all->stack_a->next->value = temp;
	temp = all->stack_a->index;
	all->stack_a->index = all->stack_a->next->index;
	all->stack_a->next->index = temp;
	temp = all->stack_a->flag;
	all->stack_a->flag = all->stack_a->next->flag;
	all->stack_a->next->flag = temp;
	if (f)
		ft_putendl_fd("sa", 1);
}

void	sb(t_all *all, int f)
{
	int	temp;

	if (all->len_b < 2)
		return ;
	temp = all->stack_b->value;
	all->stack_b->value = all->stack_b->next->value;
	all->stack_b->next->value = temp;
	temp = all->stack_b->index;
	all->stack_b->index = all->stack_b->next->index;
	all->stack_b->next->index = temp;
	temp = all->stack_b->flag;
	all->stack_b->flag = all->stack_b->next->flag;
	all->stack_b->next->flag = temp;
	if (f)
		ft_putendl_fd("sb", 1);
}

void	ss(t_all *all, int f)
{
	sa(all, 0);
	sb(all, 0);
	if (f)
		ft_putendl_fd("ss", 1);
}
