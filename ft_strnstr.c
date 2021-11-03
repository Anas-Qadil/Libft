/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:30:23 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 11:08:49 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;
    int j = 0;
    const char *save;
    
    if (*needle == '\0')
        return ((char *)haystack);
    
    if (haystack == NULL && len == 0)
        return (NULL);
    while (haystack[i] && len--)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            j = 1;
            while (haystack[i + j] == needle[j] && needle[j] != '\0' && len--)
                j++;
            save = &haystack[i];
            if (needle[j] == '\0')
                 return ((char *)save);
        }
        i++;
    }
    return (NULL);
}