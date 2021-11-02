/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:32 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/02 18:16:19 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strchr(const char *s, int c)
{
	int sizeOfString;
	
	sizeOfString = 0;
	while (s[sizeOfString])
		sizeOfString++;
	if ((char )c == '\0')
		return ((char *)(s + sizeOfString));
	while (*s)
		if (*(char *)s++ == (char )c)
			return ((char *)--s);
	return (NULL);
}
