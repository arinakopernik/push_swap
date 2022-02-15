/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:41:59 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:42:00 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	srcl;
	size_t	b;
	size_t	i;

	srcl = ft_strlen(src);
	i = 0;
	while (i < size && dst[i])
		i++;
	dstl = i;
	b = 0;
	if (i < size)
	{
		while (i < size - 1 && src[b])
		{
			dst[i] = src[b];
			i++;
			b++;
		}
		dst[i] = '\0';
	}
	if (size - 1 < dstl)
		return (size + srcl);
	return (srcl + dstl);
}
