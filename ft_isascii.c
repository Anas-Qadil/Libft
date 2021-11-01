/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:57:48 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 10:58:43 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c) 
{
    if (c >= 0 && c <= 177)
        return (1);
    return (0);
}
int main(int argc, char **argv)
{
	printf("%c", argv[1][0]);

	printf("\n-----isdigit system-----\n");	
	printf("%d", isascii(argv[1][0]));
	printf("\n-----my ft_isalpha-----\n");
	printf("%d", ft_isascii((argv[1][0])));
}
