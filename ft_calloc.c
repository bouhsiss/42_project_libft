/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:43:49 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/09 18:43:52 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count == 0 || size == 0)
		return (NULL);
	str = (void *)malloc(size * count);
	ft_bzero(str, count);
	return (str);
}
/*int main()
{
 
    int* ptr;
    int n, i;
 
    n = 5;
    printf("Enter number of elements: %d\n", n);
 
    ptr = (int*)ft_calloc(n, sizeof(int));
 
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        printf("Memory successfully allocated using calloc.\n");
 
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
 
    return 0;
}*/
