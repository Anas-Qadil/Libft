/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:38:18 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 10:39:07 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c) 
{
    
    return(0);
}
int main(int argc, char **argv)
{
	printf("%c", argv[1][0]);

	printf("\n-----isdigit system-----\n");	
	printf("%d", isdigit(argv[1][0]));
	printf("\n-----my ft_isalpha-----\n");
	printf("%d", ft_isdigit(argv[1][0]));
}
