/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:01:38 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 10:01:32 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    char *temp;
    
    temp = (char *)dest;

    if (dest > src)
        while (len--)
            ((char *)(dest))[len] = ((char *)src)[len];
    else
        while(len--)
            *(char *)dest++ = *(char *)src++;
    return (temp);
}

int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    memcpy(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);
 
    return 0;
}
