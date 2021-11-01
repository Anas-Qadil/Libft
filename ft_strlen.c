/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:21:32 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 11:31:16 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    printf("%zu", ft_strlen(argv[1]));    
}