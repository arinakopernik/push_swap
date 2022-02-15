/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:43:43 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:43:44 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + a));
	while (a != 0)
	{
		if (s[a - 1] == (char)c)
			return ((char *)(s + a - 1));
		a--;
	}
	return (NULL);
}
