/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:22:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 09:08:01 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    while(n--)
        *(char *)s++ = 0;
}

int main(void)
{
    char arr[20] = "hello wolrd";
    int    i = 20;
    
    ft_bzero(arr, 4);
    while(i--)
        printf("%c", arr[i]);
}