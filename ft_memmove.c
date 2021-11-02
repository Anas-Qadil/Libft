/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 18:08:38 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char *save = dst;
	
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (len--)
			*(char *)dst++ = *(char *)src++;
	return ((void *)save);
}