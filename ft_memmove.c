/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:45:20 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/15 20:55:49 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*desti;
	size_t	i;

	source = (char *)src;
	desti = (char *)dst;
	i = 0;
	if (src == 0 && dst == 0)
		return (0);
	if (source < desti)
	{
		while (len-- > 0)
			desti[len] = source[len];
	}
	else
	{
		while (len-- > 0)
			*(desti++) = *(source++);
	}
	return (dst);
}
/*
int main () {
   char dest[0xF0];
   char *src1 = "thanks to @apellicc for this test !\r\n";

	printf("Before memmove dest = %s, src = %s\n", dest, src1);
	memmove(dest ,src1 , ft_strlen(src1));
	printf("After memmove dest = %s, src = %s\n", dest, src1);

   return(0);
}
*/
