/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 17:38:55 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst2 > src2)
	{
		while (len)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	if (dst2 <= src2)
		while (i < len)
			{
				dst2[i] = src2[i];
				i++;
			}
	return ((void *)dst);
}