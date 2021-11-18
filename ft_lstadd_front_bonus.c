/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouhsis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:07:18 by hbouhsis          #+#    #+#             */
/*   Updated: 2021/11/17 18:53:48 by hbouhsis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft_bonus.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main ()
{
    t_list  *tmp, *node;
	int data, i;

	tmp = (t_list *)malloc(sizeof(t_list));
	node = (t_list *)malloc(sizeof(t_list));
	tmp->content = "37";
	tmp->next = NULL;
	node->content = "13";
	node->next = NULL;

	ft_lstadd_front(&tmp, node );
	while (tmp != NULL)
	{
		printf("%s", tmp->content);
		tmp = tmp->next;
	}
}*/
