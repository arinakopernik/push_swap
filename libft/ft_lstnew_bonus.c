/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:37:21 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:37:24 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*q;

	q = (t_list *)malloc(sizeof(t_list));
	if (!q)
		return (0);
	q->content = content;
	q->next = NULL;
	return (q);
}
