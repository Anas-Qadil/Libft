/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:45:27 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/01 10:55:10 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if(((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ||
        (c >= 0 && c <= 9))
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
	printf("%c", argv[1][0]);

	printf("\n-----isalpha system-----\n");
	printf("%d", isalnum(argv[1][0]));
	printf("\n-----my ft_isalpha-----\n");
    if (argv[1][0] >= 48 && argv[1][0]<= 57)
	    printf("%d", ft_isalnum(argv[1][0] - 48));
    else
        printf("%d", ft_isalnum(argv[1][0]));
}
