/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:32 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 17:39:26 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strchr(const char *s, int c)
{
	char	c3;
	char	*str;
	int		i;
	int so = 0;
	
	while (*s++)
		so++;
	c3 = (char)c;
	str = (char *)s;
	i = 0;
	if (c3 == '\0')
		return (str + so);
	while (str[i])
	{
		if (str[i] == c3)
			return (str + i);
		i++;
	}
	return (NULL);
}
