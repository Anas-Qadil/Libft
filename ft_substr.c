/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:21:30 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 14:03:15 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//uncompleted

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *subString;

    if (s == 0)
        return (NULL);
    if (start > len)
    {
        subString = malloc(1);
        *subString = '\0';
        return (subString);       
    }
    subString = malloc(sizeof(char) * (len + 1));
    if (subString == NULL)
        return (NULL);
    int i = -1;
    while (s[start] && len--)
    {
        subString[++i] = ((char *)s)[start];
        start++;
    }
    subString[i + 1] = '\0';
    return (subString);
}