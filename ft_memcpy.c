/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:19:47 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/06 11:42:42 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*save;

	save = dst;
	if (dst || src)
	{
		while (n--)
			*(char *)dst++ = *(char *)src++;
		return (save);
	}
	return (NULL);
}
