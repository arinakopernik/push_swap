/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:41:16 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:41:17 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		a;
	int		b;

	a = ft_strlen(s1);
	b = 0;
	p = malloc((a + 1) * sizeof(char));
	if (!p)
		return (0);
	while (s1[b])
	{
		p[b] = s1[b];
		b++;
	}
	p[b] = '\0';
	return (p);
}
