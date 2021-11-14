/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:48 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 22:19:02 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		sz;

	sz = ft_strlen((char *)s1);
	s2 = (char *)malloc(sz * sizeof (char) + 1);
	if (!(s2))
		return(0);
	ft_memcpy(s2, s1, sz);
	s2[sz] = '\0';
	return (s2);
}
/*int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}*/
