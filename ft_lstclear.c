/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:46:33 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/09 20:24:50 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr_node;
	t_list	*next_node;

	curr_node = *lst;
	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		del(curr_node->content);
		free (curr_node);
		curr_node = next_node;
	}
	*lst = NULL;
}
