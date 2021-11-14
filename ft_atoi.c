/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:54:05 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 20:41:53 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	return (n * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   
   printf("%d",atoi("2147483647"));



   return(0);
}*/
