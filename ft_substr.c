/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:22:58 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/18 02:53:25 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	size;
	unsigned int	i;

	if (!s)
		return(0);
	if (start >= ft_strlen(s) || len >ft_strlen(s))
		return (ft_strdup("\0"));
	size = (unsigned int)len;
	substr = (char *)malloc(len * sizeof(char) + 1);
	if (!(substr))
		return (0);
//	if (start >= ft_strlen(s) || len > ft_strlen(s) || !s)
//		return (ft_strdup("\0"));
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
	char str[] = "lorem ipsum dolor sit amet";
	char *strsub;
	if (!(strsub = ft_substr(str, 7, 0)))
		printf("NULL");
	else 
		printf("%s\n", strsub);
	if (str == strsub)
		printf("\nA new string was not returned");

}*/
