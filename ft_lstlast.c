/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:03:28 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/07 14:04:17 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{	
		if (temp->next == NULL)
			return (temp);
		else
			temp = temp->next;
	}
	return (NULL);
}
