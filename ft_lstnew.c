/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:45:31 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/04 15:25:43 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
    t_list *node;
    node = malloc(sizeof(t_list));
    if(!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
/*
int main(void)
{
    
    t_list *head = ft_lstnew("awbx");
    printf("%s", head->content);
}*/