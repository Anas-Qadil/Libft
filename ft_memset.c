/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:44:24 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 13:21:56 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *s = b;
    
    while (len--)
        *(unsigned char *)b++ = c;
    return (s);
}

int main(int argc, char **argv)
{
    char arr[20];
    int i = 0;
    ft_memset(arr, 'c', 20);
    while(i < 20)
    {
        printf("%c", arr[i]);
        i++;
    }
    
}