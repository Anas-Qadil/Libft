/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:23:21 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/04 14:01:23 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    if (s && fd)
        while (*s)
        write(fd, s++, 1);
}
/*
int main(void)
{
    FILE *fp = open("test.txt", O_WRONLY);
    ft_putstr_fd("hello world", fp);
}
*/