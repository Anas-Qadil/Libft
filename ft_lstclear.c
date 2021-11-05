/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:46:33 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 13:02:37 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *currNode = *lst;
    t_list *nextNode;
    
    while (currNode != NULL)
    {
        nextNode = currNode->next;
        del(currNode->content);
        free(currNode);
        currNode = nextNode;
    }
    *lst = NULL;
}