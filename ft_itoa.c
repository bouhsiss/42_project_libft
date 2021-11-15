/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:56:49 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/15 16:11:49 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	countlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*cnvrt(char *str, int  len, long  n, int i)
{
	while (n > 0 && len != i)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{	
	int		len;
	char	*str;
	int		i;
	long ng;

	i = 0;
	ng = (long)n;
	len = countlen(ng);
	if (n < 0)
		len++;
	str = (char *)malloc (sizeof(char) * len + 1);
//	if (n == -2147483648)
//		return ("-2147483648\0");
	if (!(str))
		return (NULL);
	if (!n)
		return ("0");
	if (n < 0)
	{
		ng *= -1;
		str[i] = '-';
		i++;
	}
	str = cnvrt(str, len, ng, i);
	str[len] = '\0';
	return (str);
}

int	main ()
{
	printf("%s\n", ft_itoa(-2147483648 ));
}
