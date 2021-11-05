/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:09:10 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 12:45:08 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list *node = lst->next;
    del(lst->content);
    free(lst);
    lst = node;
}