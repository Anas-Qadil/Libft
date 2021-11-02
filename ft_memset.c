/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:18 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 17:20:24 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	az;
	unsigned char	*b1;
	size_t			i;

	i = 0;
	az = (unsigned char)c;
	b1 = (unsigned char *)b;
	while (i < len)
	{
		b1[i] = az;
		i++;
	}
	return (b);
}