/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:32 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/09 18:51:35 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	chr;

	chr = (char)c;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	return (0);
}
