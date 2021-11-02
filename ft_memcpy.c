/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:19:47 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 17:29:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	i = 0;
	if (dst || src)
	{
		dst1 = (char *)dst;
		src1 = (char *)src;
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
		return (dst);
	}
	return (0);
}