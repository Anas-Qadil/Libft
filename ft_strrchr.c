/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:21:39 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 15:40:45 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	size_of_string;

	size_of_string = 0;
	while (s[size_of_string])
		size_of_string++;
	if ((char )c == '\0')
		return ((char *)(s + size_of_string));
	while (size_of_string-- > 0)
		if (((char *)s)[size_of_string] == (char )c)
			return (&((char *)s)[size_of_string]);
	return (NULL);
}
