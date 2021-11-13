/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:13:44 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/13 01:22:34 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	unsigned int	i;
	char			*str;
	char			*substr;

	size = (unsigned int)len;
	substr = (char *)malloc(len * sizeof (char));
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

int	fnfirst(char const *s1, char const *set)
{
	int	i;
	int	first;

	i = 0;
	first = 0;
	while (set[i])
	{
		while (s1[first] == set[i])
		{
			first++;
			i = 0;
		}
		i++;
	}
	return (first);
}

size_t	fnlast(char const *s1, char const *set)
{
	int		i;
	size_t	last;

	i = 0;
	last = ft_strlen(s1) - 1;
	while (set[i])
	{
		while (s1[last] == set[i])
		{
			last--;
			i = 0;
		}
		i++;
	}
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	size_t	last;
	size_t	size;

	if (!(s1))
		return (NULL);
	first = fnfirst(s1, set);
	last = fnlast(s1, set);
	size = last - first +1;
	return (ft_substr(s1, first, size));
}
/*int main()
{
    char *rt = ft_strtrim("", "dnld");
    printf("%s\n",rt);
}*/
