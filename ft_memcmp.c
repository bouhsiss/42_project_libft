/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:44:57 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 02:18:45 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t		i;
	unsigned char		*c1;
	unsigned char		*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (c1[i] == c2[i] && i < n - 1)
		i++;
	return (c1[i] - c2[i]);
}
/*
int main () {
   char str1[15] = "\xff\xaa\xde\x12";
   char str2[15] = "\xff\xaa\xde\x12MACOSAAAAA";
   int ret;

   //memcpy(str1, "\xff\xaa\xde\x12", 6);
  // memcpy(str2, "\xff\xaa\xde\x12MACOSAAAAA", 6);

   ret =ft_memcmp(str1, str2, 4);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
