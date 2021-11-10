/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:52:14 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/10 23:55:56 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		len;
	int		destlen;
	int		srclen;

	i = 0;
	destlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	size = (int)size;
	len = size - destlen - 1;
	while ((char *)src != '\0' && i < len)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	return (srclen + destlen);
}
