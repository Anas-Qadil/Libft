/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:08:38 by zakdim            #+#    #+#             */
/*   Updated: 2021/11/02 16:55:00 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
