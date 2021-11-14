/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:23:33 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/13 22:39:14 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	wcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || !(s[i + 1])))
			count++;
		i++;
	}
	return (count);
}

int	wrlen(char const *str, char c)
{
	int	t;

	t = 0;
	while (str[t] != c)
		t++;
	return (t);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	char	**str;

	i = 0;
	t = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (wcount(s, c)) + 1)))
		return (NULL);
	while (i < wcount(s, c))
	{
		j = 0;
		while (s[t] == c)
			t++;
		if (!(str[i] = (char *)malloc(sizeof (char) * wrlen(s, c) + 1)))
			return (NULL);
		while (j < wrlen(s, c) && s[t] != c)
		{
			str[i][j] = (char)s[t];
			t++;
			j++;
		}
		str[i][j] = '\0';
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int main ()
{
	int	i = 0;
	const char *str = "ood     jf rn fr";
	char **ptr = ft_split (str, ' ');
	while (ptr[i])
	{
		printf ( "%s\n", ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
}
*/
