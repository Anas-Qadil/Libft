/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:54:46 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/07 14:05:38 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	size;
	int	j;

	size = 0;
	if (s)
	{
		while (s[size])
			size++;
		j = 0;
		while (j < size)
		{
			f(j, &s[j]);
			j++;
		}
	}
}

/*
void *f(unsigned int n, char *c)
{
	printf("k");
}

int main(void)
{
	char *str = "hello world";
	ft_striteri(str, f);
	
}*/