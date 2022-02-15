/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:08:34 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:02 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	struct s_stack		*next;
	struct s_stack		*prev;
	int					value;
	int					index;
	int					flag;
}	t_stack;

typedef struct s_all
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			min_a;
	int			min;
	int			med;
	int			max;
	int			len_a;
	int			len_b;
}	t_all;
int		main(int argc, char **argv);
void	second_check(long long temp, char **arr);
//parser

t_all	*parser(char **argv);

char	**make_array(char **argv);
void	checking_arguments(char **arr);
void	ft_error(void);
int		ft_duplicate(char **arr);

t_all	*struct_init(char	**arr);
void	arr_to_stack(char **arr, t_all *all);
void	bubblesort(int *unsorted, int *sorted, int len, t_all *all);
void	create_stack(t_all *all, int *sorted, int *unsorted, int len);
t_stack	*create_list(int value, int index);
void	add_list(t_stack **stack_a, t_stack *new);

void	free_array(char	**arr);

void	checking_arguments(char **arr);
void	ft_error(void);
int		ft_duplicate(char **arr);

//sorting

void	sort(t_all *all);
int		is_sorted(t_all *all);

void	simple_sort_a(t_all *all);
void	sort_five_a(t_all *all);
void	sort_four_a(t_all *all);
void	sort_three_a(t_all *all);

void	first_move(t_all *all);
void	a_mmm(t_all *all);
void	sorted_go_a(t_all *all);

void	go_b_to_a(t_all *all);
void	b_mmm(t_all *all);
int		search_near_sorted_b(t_all *all);

void	simple_sort_b(t_all *all);
void	simple_sort_b2(t_all *all, int f);
void	sort_three_b(t_all *all);

void	sort_stack_a(t_all *all, int a, int flag, int index);
void	sort_stack_a2(t_all *all, int f);
void	sort_in_b_for_a(t_all *all);
void	sorted_go_down(t_all *all);

void	go_a_to_b(t_all *all);
void	search_near_sorted_a(t_all *all);

void	free_stacks(t_all *all);

// commands
void	sa(t_all *all, int f);
void	sb(t_all *all, int f);
void	ss(t_all *all, int f);

void	pa(t_all *all, int f);
void	a_push(t_all *all);
void	pb(t_all *all, int f);
void	b_push(t_all *all);

void	ra(t_all *all, int f);
void	rb(t_all *all, int f);
void	rr(t_all *all, int f);

void	rra(t_all *all, int f);
void	rrb(t_all *all, int f);
void	rrr(t_all *all, int f);
#endif