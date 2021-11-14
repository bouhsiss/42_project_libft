/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:42:40 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 03:53:00 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <string.h>
void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)dst;
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
//	char b1[0xF00];

	ft_memset(NULL , 'A', 55);
//	printf("%s\n", h);
}
*/
