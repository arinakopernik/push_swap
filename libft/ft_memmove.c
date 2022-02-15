/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:38:52 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:38:54 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	a;

	if (n == 0 || src == dst)
		return (dst);
	if (dst > src)
	{
		a = (int)n - 1;
		while (a >= 0)
		{
			*(char *)(dst + a) = *(char *)(src + a);
			a--;
		}
	}
	else
	{
		a = 0;
		while (a < (int)n)
		{
			*(char *)(dst + a) = *(char *)(src + a);
			a++;
		}
	}
	return (dst);
}
