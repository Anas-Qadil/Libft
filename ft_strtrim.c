/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:53:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/07 14:06:11 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, const char *set)
{
	while (*set)
		if (*set++ == (const char)c)
			return (1);
	return (0);
}

static int	front_index(const char *s1, const char *set)
{
	int	i;
	int	savefront;

	i = -1;
	savefront = 0;
	while (s1[++i])
	{
		if (checker(s1[i], set))
			savefront++;
		else
			break ;
	}
	return (savefront);
}

static int	back_index(const char *s1, int i, const char *set)
{
	int	saveback;

	saveback = i;
	while (i-- > 0)
	{	
		if (checker(s1[i], set))
			saveback = i;
		else
			break ;
	}
	return (saveback);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		savefront;
	int		saveback;
	int		i;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	savefront = front_index(s1, set);
	i = ft_strlen(s1);
	if (savefront == i)
		return (ft_strdup(""));
	saveback = back_index(s1, i, set);
	result = (char *)malloc(sizeof(char) * (saveback - savefront + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (savefront < saveback)
		result[i++] = s1[savefront++];
	result[i] = '\0';
	return (result);
}
