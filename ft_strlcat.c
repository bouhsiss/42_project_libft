/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:52:14 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/14 03:59:33 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		destlen;
	size_t		srclen;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size - 1 <= destlen)
		return (srclen + size);
	while (destlen + i < size - 1)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (srclen + destlen);
}
/*
int main()
{
	 ft_strlcat("fhojd", "skn", 0);
}
*/
