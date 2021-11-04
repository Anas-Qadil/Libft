/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:46 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/04 13:07:20 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int size = 0;

    if (!s || !f)
        return (NULL);
    int j = 0;
    while (j < size)
    {
        f(j, s[j]);
        j++;
    }
}