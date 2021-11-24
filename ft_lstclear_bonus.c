/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 22:22:14 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/21 00:13:37 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*curr;
	t_list	*nxt;

	curr = *lst;
	if (!lst)
		return ;
	while (curr != NULL)
	{
		nxt = curr->next;
		ft_lstdelone(curr, del);
		curr = nxt;
	}
	*lst = NULL;
}
