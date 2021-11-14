/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:22:58 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/13 01:27:00 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	size;
	unsigned int	i;
	char			*str;

	size = (unsigned int)len;
	substr = (char *)malloc(len * sizeof(char));
	str = (char *)s;
	i = 0;
	if (!(substr))
		return (NULL);
	while (i < size)
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
/*int main ()
{
	const char *c = "OHHHOkgbbUDAOH";
	char *rt = ft_substr(c, 5, 7);
	printf("%s", rt);
}*/
