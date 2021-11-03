/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:53:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 15:11:47 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    int i = 0, j = 0;
    int checkerFront = 0;
    
    while (s1[i])
    {
        j = 0
        while (set[j])
        {
            if (s1[i] == set[j])
                checkerFront++;
            j++;
        }
        i++;
    }
    printf("%d match", );
}

int main(int argc, char **argv)
{
    printf("%s",ft_strtrim(argv[1], argv[2]));
}