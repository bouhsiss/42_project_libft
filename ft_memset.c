/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:42:40 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/13 00:17:09 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	char	*s;

	s = (char *)dst;
	if (!(dst) || !(len))
		return (0);
	while (len)
	{
		*s = c;
		len--;
		s++;
	}
	return (dst);
}
/*
int main ()
{
	char b1[0xF00];

	char *h = ft_memset("" , 'A', 0);
	printf("%s\n", h);
}
*/
