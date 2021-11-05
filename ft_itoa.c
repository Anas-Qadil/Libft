/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:41:14 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 09:47:22 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int sizef(int n)
{
    if (n == 0 || n == -0)
        return (1);
    int size = 0;
    while (n > 0)
    {
        size++;
        n = n / 10;
    }
    return (size);
}

char *fuckingMinInt()
{
    char *str = malloc(12 * sizeof(char ));
    str[0] = '-';
    str[1] = '2';
    str[2] = '1';
    str[3] = '4';
    str[4] = '7';
    str[5] = '4';
    str[6] = '8';
    str[7] = '3';
    str[8] = '6';
    str[9] = '4';
    str[10] = '8';
    str[11] = '\0';
    return (str);
}
char *ft_itoa(int n)
{
    char *str;
    int sign = 0;
    long int num = n;
    if (n == -2147483648)
        return (fuckingMinInt());
    if (num < 0)
    {
        sign = 1;
        num = -num;
    }
    //printf("%d\n", num);
    int size = sizef(num);
    str = (char *)malloc((size + 1 + sign) * sizeof(char));
    if (str == NULL)
        return (NULL);
    if (sign == 1){
        str[0] = '-';
        size++;
    }
    str[size] = '\0';
    while (--size != -1)
    {
        if (sign == 1 && size == 0)
            break;
        str[size] = (num % 10) + 48;
        num = num / 10;
    }
    return (str);
}
/*
int main(void)
{
    printf("%s", ft_itoa(-2147483648));
}*/