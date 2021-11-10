/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:28:30 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/10 23:56:15 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	char	*src2;

	src2 = (char *)src;
	i = 0;
	while (i < size - 1 && src[i] && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src2));
}
/*int main()
{
    char dst[10];
    char src[] = "";
    int rt = ft_strlcpy(dst, src, 3);
    printf("the dst : %s , the return %d", dst, rt);
}*/
