/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:22:58 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 04:11:26 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	size;
	unsigned int	i;

	if (start >= ft_strlen(s))
	{
		if (!(substr = malloc(sizeof(char))))
			return(0);
		substr[0] = '\0';
		return(substr);

	}
	size = (unsigned int)len;
	if (!(substr = (char *)malloc(len * sizeof(char) + 1)))
		return(0);
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
