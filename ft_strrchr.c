/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:13:20 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 16:54:42 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    while (*s)
        s++;
    if (c == '\0')
        return ((char *)s);
    while (*(s))
        if (*s == c)
            return ((char *)s);
    return (0);
}
int main()
{
    char *str = "hello world";
    printf("%s", strrchr(str, '\0'));
    printf("\n%s\n", ft_strrchr(str, '\0'));
}