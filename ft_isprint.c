/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:59:57 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 11:02:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c) 
{
    if (c >= 32 && c <= 127)
        return (1);
    return (0);
}
int main(int argc, char **argv)
{
	printf("%c", argv[1][0]);

	printf("\n-----isdigit system-----\n");	
	printf("%d", isprint(argv[1][0]));
	printf("\n-----my ft_isalpha-----\n");
	printf("%d", ft_isprint((argv[1][0])));
}
