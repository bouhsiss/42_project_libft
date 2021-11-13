/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:45:07 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/13 00:15:21 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	char		*sorc;
	size_t		i;

	sorc = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		*dest = *sorc;
		i++;
		dest++;
		sorc++;
	}
	return (dst);
}

/*int main () {
   char dest[] = "oldstring";

   printf("Before memmove dest = %s, src = %s\n", dest, dest);
   ft_memcpy(dest +2, dest, 3);
   printf("After memmove dest = %s, src = %s\n", dest, dest);

   return(0);
}*/
/*

int main () {
   char dest[] = "abcde";

   printf("Before memcpy dest = %s, src = %s\n", dest, dest);
   ft_memcpy(dest +2, dest, 3);
   printf("After memcpy dest = %s, src = %s\n", dest, dest);

   return(0);
}*/
