/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:50:15 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 08:39:51 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>

int countWords(const char *s, char c)
{
    int count = 0;

    while (*s)
    {
        if (*s != c)
        {   
            while (*s != c && *s)
                s++;
            count++;
        }
        else
            s++;
    }
    return (count);
}

char *createWord(const char *s, int start, int end)
{
    char *word;
    //int count = 0;
    int i = 0;
    int wordLen = end - start;
    // allocat word len
    word = (char *)malloc((wordLen * sizeof(char )) + 1);
    // starting the assignement
    while(start < end)
    {
        word[i++] = s[start++];
    }
    word[i] = '\0';
    return (word);
}
char **ft_split(char const *s, char c)
{
    char **str;
    int start = 0;
    int end = 0;
    int i = 0;
    int k = 0;
    // protect the freaking malloc
    if (!s)
        return (NULL);
    // allocat memory
    str = (char **)malloc(((countWords(s, c) + 1) * (sizeof(char *))));
    if (str == NULL)
        return (NULL);
    // getting first and last index of word
    while (s[i])
    {
        if (s[i] != c)
        {
            start = i;
            while (s[i] != c && s[i])
                i++;
            end = i;
            /*if(s[i] == '\0')
                break;*/
            str[k] = createWord(s, start, end);
            //printf("%d %s | ",k, str[k]);
            k++;
        }
        else
            i++;
    }
    //printf("%s", str[0]);
    str[k] = 0;
    return (str);
}
/*
int main(int ac, char **av)
{
    char *s = "      split       this for   me  !";

	char **arr = ft_split(s, ' ');
    
    int i = 0;
    
    //printf("%d\n", countWords(av[1], ' '));
    while(arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }

}*/