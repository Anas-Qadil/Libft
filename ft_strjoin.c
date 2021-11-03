/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:58 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 14:52:13 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    int s1Size = 0;
    int s2Size = 0;
    int size;
    char *ptr;
    // calculating the size
    while (s1[s1Size])
        s1Size++;
    while (s2[s2Size])
        s2Size++;
    size = s2Size + s1Size;
    
    // allocationg 
    ptr = malloc((sizeof(char))*(size + 1));
    if (ptr == NULL)
        return (NULL);
    
    //start concat
    int i = 0;
    
    while (s1[i])
    {
        ptr[i] = ((char *)s1)[i];
        i++;
    }
    int j = 0;
    while (s2[j])
    {
        ptr[i] = ((char *)s2)[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}