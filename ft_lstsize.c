/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:53:56 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/04 15:55:16 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int i = 0;
    t_list *temp;
    
    temp = lst;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return (i);
}