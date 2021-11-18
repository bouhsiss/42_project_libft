/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:43:41 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/18 02:14:29 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (char *)s;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
/*
int main ()
{
	char *str = "aaaaa";
	char *sh = "aaaaa";
	ft_bzero(str, 20);
	//bzero(sh, 20);
	printf("mine : %s", str);
	//printf("their :%s", sh);
}
*/
