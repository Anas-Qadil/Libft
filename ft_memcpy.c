/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:28:41 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 09:10:31 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, void *src, size_t n)
{
    char *addr = dest;
    while(n--)
        *(char *)dest++ = *(char *)src++;
    return(addr);
}
int main(void)
{
    char arrdest[20];
    char arrsrc[20];
    int i = 20;
    memset(arrsrc, 'a', 20);
    while(i--)
    {
        printf("%c", arrdest[i]);
    }
}