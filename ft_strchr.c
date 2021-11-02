/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:51:38 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 16:07:00 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (c == *s)
            return ((char *)s);
        s++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    char *s = "hello world";
    printf("%s\n", ft_strchr(s, 'o'));
    printf("%s", strchr(s, 'o'));
}