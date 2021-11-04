/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:02:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/04 14:06:41 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    if (s && fd)
    {   
        while (*s)
            write(fd, s++, 1);
        write(fd, "\n", 1);
    }
}
/*
int main(void)
{
    FILE *fp = open("test.txt", O_WRONLY);
    ft_putendl_fd("hello worldendl", fp);
}*/
