/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:25:26 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 10:33:44 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include<ctype.h>

int	ft_isalpha(int c)
{
	if((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return(0);
}

int main(int argc, char **argv)
{
	printf("%c", argv[1][0]);

	printf("\n-----isalpha system-----\n");	
	printf("%d", isalpha(argv[1][0]));
	printf("\n-----my ft_isalpha-----\n");
	printf("%d", ft_isalpha(argv[1][0]));
}
