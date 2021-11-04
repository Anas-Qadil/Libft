/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:53:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/04 14:13:55 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int checker(char c,const char *set)
{
    while (*set)
        if (*set++ == (const char)c)
            return(1);
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int saveFront = 0;
    int saveback;
    int i = -1;
    char *result;
    int size;
   //doing the front match
   if (!s1 || !set)
        return (NULL);
    while (s1[++i])
        if(checker(s1[i], set))
            saveFront++;
        else
            break;
    // doing the back match
    saveback = 0;
    i = 0;
    while (s1[i]) i++;
    if (saveFront == i)
    {
        result = (char *)malloc(sizeof(char));
        if (result == NULL)
            return (NULL);
        result[0] = '\0';
        return(result);
    }
    
    // satrt
    saveback = i;
    while (i-- > 0)
        if(checker(s1[i], set))
            saveback = i;
        else
            break;
    size = saveback - saveFront + 1;
    result = (char *)malloc(sizeof(char)*size);
    if(result == NULL)
        return (NULL);
    i = 0;

    while (saveFront < saveback)
    {
        result[i] = s1[saveFront];
        i++;
        saveFront++;
    }
    result[i] = '\0';
    return (result);
}
/*
int main(int ac, char **argv)
{
    printf("%s", ft_strtrim(argv[1], argv[2]));
}*/