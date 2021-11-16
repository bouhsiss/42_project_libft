/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:13:24 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/16 22:00:20 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	temp = lst;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		del(lst);
	while (temp != NULL )
	{
		new = temp->next;
		new = f(temp->content);
	}
	return (new);
}
