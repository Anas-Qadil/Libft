/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:26:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 13:17:48 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}
/*
int main(void)
{
    t_list *head, n1, n2, n3;
    
    head = &n1;
    n1.content = 1;
    n2.content = 2;
    n3.content = 3;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    t_list *temp = &n1;
    
    t_list new;
    new.content = 4;
    new.next = NULL;
    ft_lstadd_front(&head, &new);
    while (temp != NULL)
    {
        printf("%d  -", temp->content);
        temp = temp->next;
    }
}*/