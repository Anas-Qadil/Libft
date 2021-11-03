/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:11:51 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 11:39:54 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_calloc(size_t count, size_t size)
{
    
    void *ptr;
    void *save;

    ptr = malloc(count * size);
    if (ptr == 0)
        return (ptr);
    save = ptr;
    while (*(char *)ptr)
        *(char *)ptr++ = 0;
    return (save); 
}
