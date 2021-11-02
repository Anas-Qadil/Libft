/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:21:39 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 18:21:09 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int sizeOfString;
	
	sizeOfString = 0;
	while (s[sizeOfString])
		sizeOfString++;
	if ((char )c == '\0')
		return ((char *)(s + sizeOfString));
	while (sizeOfString-- > 0)
		if (((char *)s)[sizeOfString] == (char )c)
			return (&((char *)s)[sizeOfString]);
	return (NULL);
}