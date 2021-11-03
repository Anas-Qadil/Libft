/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:41 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/03 09:38:22 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcSize;

    srcSize = 0;

    while (src[srcSize])
        srcSize++;
    if (dstsize == 0)
        return (srcSize);
    while (--dstsize && *src)
        *dst++ = *(char *)src++;
    *dst = '\0';
    return (srcSize);
}
