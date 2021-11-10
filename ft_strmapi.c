/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:21:18 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/10 15:49:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h" 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		size;
	int		j;

	size = 0;
	if (!s || !f)
		return (NULL);
	while (s[size])
		size++;
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (j < size)
	{
		ptr[j] = f(j, s[j]);
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
