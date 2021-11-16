/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:08:55 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/16 21:59:40 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*curr;
	t_list	*nxt;

	curr = *lst;
	while (curr != NULL)
	{
		nxt = curr->next;
		ft_lstdelone(curr, del);
		curr = nxt;
	}
	*lst = NULL;
}
