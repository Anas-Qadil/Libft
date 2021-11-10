/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:58 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/09 09:17:41 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_size;
	int		s2_size;
	char	*ptr;
	int		i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	ptr = malloc((sizeof(char)) * ((s2_size + s1_size) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[++i])
		ptr[i] = ((char *)s1)[i];
	s1_size = -1;
	while (s2[++s1_size])
		ptr[i++] = ((char *)s2)[s1_size];
	ptr[i] = '\0';
	return (ptr);
}
