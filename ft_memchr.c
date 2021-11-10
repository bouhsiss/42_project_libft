/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:44:46 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/10 23:50:57 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char	*str;
	char	chr;

	chr = (char)c;
	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == chr)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
