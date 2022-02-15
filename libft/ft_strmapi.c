/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrianna <lbrianna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:42:52 by lbrianna          #+#    #+#             */
/*   Updated: 2022/02/11 16:42:54 by lbrianna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	i = 0;
	if (!s)
		return (0);
	string = ft_strdup(s);
	if (!string)
		return (0);
	while (string[i])
	{
		string[i] = (*f)(i, string[i]);
		i++;
	}
	return (string);
}
