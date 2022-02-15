/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:41:00 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:41:02 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[a])
	{
		if (s[a] == (char)c)
			return ((char *)(s + a));
		a++;
	}
	return (NULL);
}
