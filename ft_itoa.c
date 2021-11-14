/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:56:49 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 22:38:11 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	countlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*cnvrt(char *str, int len, int n, int i)
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

	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 2147483647)
		return ("2147483647");
	len = countlen(n);
	if (n < 0)
		len++;
	str = (char *)malloc (sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[i] = '-';
		i++;
	}
	str = cnvrt(str, len, n, i);
	str[len] = '\0';
	return (str);
}
/*int	main ()
{
	int i = -21474837;
	char *rt = ft_itoa(i);
    printf("%s", rt);
}*/
