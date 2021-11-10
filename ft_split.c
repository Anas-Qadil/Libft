/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:50:15 by aqadil            #+#    #+#             */
/*   Updated: 2021/11/10 14:37:21 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_thing(char **tab, int index)
{
	while (index >= 0)
	{
		free(tab[index]);
		index--;
	}
	return (0);
}

static int	count_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			count++;
		}
		else
			s++;
	}
	return (count);
}

static char	*create_word(const char *s, int start, int end)
{
	char	*word;
	int		i;
	int		word_len;

	i = 0;
	word_len = end - start;
	word = (char *)malloc((word_len * sizeof(char )) + 1);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_the_splited_array(char **str, const char *s, char c)
{
	int		start;
	int		end;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			end = i;
			str[k] = create_word(s, start, end);
			if ((str[k]) == NULL)
				return (free_thing(str, k));
			k++;
		}
		else
			i++;
	}
	str[k] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		checker;

	checker = 1;
	if (!s)
		return (NULL);
	str = (char **)malloc(((count_word(s, c) + 1) * (sizeof(char *))));
	if (str == NULL)
		return (NULL);
	checker = fill_the_splited_array(str, s, c);
	if (checker == 0)
		return (NULL);
	return (str);
}
