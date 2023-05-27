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

static char	*ft_word_make(char *result, char *start, size_t size)
{
	result = (char *)malloc(size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, start, size);
	return (result);
}

static char	**ft_word_free(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i = i + 1;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	char	*start;
	int		wc;
	int		i;

	i = 0;
	wc = ft_word_count(str, c);
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (result == NULL)
		return (NULL);
	while (i < wc)
	{
		while (*str && *str == c)
			str = str + 1;
		start = (char *)str;
		while (*str && *str != c)
			str = str + 1;
		result[i] = ft_word_make(result[i], start, str - start + 1);
		if (result[i] == NULL)
			return (ft_word_free(result));
		i = i + 1;
	}
	result[i] = 0;
	return (result);
}
