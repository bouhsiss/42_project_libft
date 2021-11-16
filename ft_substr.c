/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:22:58 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/16 01:58:29 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	size;
	unsigned int	i;

	if ((size_t)start > len || !(s))
		return (0);
	size = (unsigned int)len;
	substr = (char *)malloc(len * sizeof(char) + 1);
	if (!(substr))
		return (0);
	if (start >= ft_strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
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
/*int main ()
{
	const char *c = "OHHHOkgbbUDAOH";
	char *rt = ft_substr(c, 5, 7);
	printf("%s", rt);
}*/
