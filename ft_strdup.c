/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:40:45 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/05 15:49:26 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
