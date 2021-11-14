/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:43:49 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 22:19:27 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (!(size) || !(count))
	{
		str =(void *)malloc(size);
		str[0] = '\0';
			return (str);
	}
	if(!(str = (void *)malloc(size * count)))
			return (0);
	ft_bzero(str, size * count);
	return (str);
}
/*
int main()
{
 
   int size = 8656;
	void *d1 =  ft_calloc(size, sizeof(int));
}*/
