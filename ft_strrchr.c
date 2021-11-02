/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:21:39 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 17:40:06 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	c2;
	int		ab;
	char	*s2;

	c2 = (char)c;
	s2 = (char *)s;

	int so = 0;
	while(*s++)
		so++;
	ab = so;
	if (c2 == '\0')
		return (s2 + ab);
	while (ab >= 0)
	{
		if (s2[ab] == c2)
			return (s2 + ab);
		ab--;
	}
	return (NULL);
}
