/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:45:27 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 16:55:52 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if(((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ||
        (c >= '0' && c <= '9'))
        return (1);
    return (0);
}