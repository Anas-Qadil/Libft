/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/09 14:04:23 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*save;

	save = dst;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (len--)
			*(char *)dst++ = *(char *)src++;
	return ((void *)save);
}
