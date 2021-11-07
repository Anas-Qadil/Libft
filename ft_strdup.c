/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:40:45 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/07 14:05:31 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		size;
	int		i;

	size = -1;
	while (s1[++size])
		;
	ptr = (char *)malloc((sizeof(char)) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = ((char *)s1)[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
