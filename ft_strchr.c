/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:20:32 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/08 10:41:25 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	size_of_string;

	size_of_string = 0;
	while (s[size_of_string])
		size_of_string++;
	if ((char )c == '\0')
		return ((char *)(s + size_of_string));
	while (*s)
		if (*(char *)s++ == (char )c)
			return ((char *)--s);
	return (NULL);
}
