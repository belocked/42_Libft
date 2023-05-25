/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:39:43 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/18 09:41:00 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i = i + 1;
		else
		{
			count = count + 1;
			while (s[i] && s[i] != c)
				i = i + 1;
		}
	}
	return (count);
}

static char	*ft_word_make(char *word, char const *s, int flag, int bias)
{
	int	i;

	i = 0;
	while (bias > 0)
	{
		word[i] = s[flag - bias];
		i = i + 1;
		bias = bias - 1;
	}
	word[i] = 0;
	return (word);
}

static char	**ft_word_split(char **result, char const *s, char c, int wc)
{
	int	i;
	int	j;
	int	bias;

	i = 0;
	j = 0 ;
	while (s[j] && i < wc)
	{
		bias = 0;
		while (s[j] && s[j] == c)
			j = j + 1;
		while (s[j] && s[j] != c)
		{
			j = j + 1;
			bias = bias + 1;
		}
		result[i] = (char *)malloc(sizeof(char) * (bias + 1));
		if (!result[i])
			return (NULL);
		ft_word_make (result[i], s, j, bias);
		i = i + 1;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**result;

	if (s == 0)
		return (0);
	wc = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!result)
		return (0);
	ft_word_split (result, s, c, wc);
	return (result);
}
