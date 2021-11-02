/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:17:53 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 17:18:32 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	mc;
	unsigned char	*ms;

	i = 0;
	mc = (unsigned char)c;
	ms = (unsigned char *)s;
	while (i < n)
	{
		if (ms[i] == mc)
			return (&ms[i]);
		i++;
	}
	return (NULL);
}
