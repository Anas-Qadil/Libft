/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:30:23 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/06 13:24:45 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*save;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			j = 1;
			while (haystack[i + j] == needle[j] && needle[j] != '\0'
				&& (i + j) < len)
				j++;
			save = &haystack[i];
			if (needle[j] == '\0' && i + j <= len)
				return ((char *)save);
		}
		i++;
	}
	return (NULL);
}
