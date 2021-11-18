/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:22:58 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/18 17:15:41 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			size;
	size_t			i;

	size = len;
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s))
		size = ft_strlen(s) - start + 1;
	substr = (char *)malloc(size * sizeof(char) + 1);
	if (!(substr))
		return (0);
	i = 0;
	while (i < size)
	{
		substr[i] = (char)s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int main ()
{
	char *str = ft_substr("tripouille", 0, 42000);
	printf("%s\n", str);
}*/
