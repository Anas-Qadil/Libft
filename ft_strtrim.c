/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:53:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 19:50:11 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
    int i = 0;
    char *result;
   //doing the front match
    while (*s1)
        if(checker(*s1++, set))
            saveFront++;
        else
            break;
    // doing the back match
    saveback = 0;
    while (s1[i]) i++;
    // satrt
    while (--i)
    {
        if(checker(s1[i], set))
            saveback = i;
        else
            break;
    }
    result = malloc(saveback - saveFront);
    i = 0;
    while (i < (saveback - saveFront))
    {
        result[i] = s[]
    }
    printf("save front %d\n", saveFront);
    printf("save back %d", saveback);
}

int main(int argc, char **argv)
{
    ft_strtrim(argv[1], argv[2]);
}