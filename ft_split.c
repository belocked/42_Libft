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

char	**ft_split_aloc_arr(char const *s, char c)
{
	char	**result;
	size_t	s_idx;
	size_t	w_cnt;

	s_idx = 0;
	w_cnt = 0;
	while (s[s_idx])
	{
		if (s[s_idx] == c)
			w_cnt = w_cnt + 1;
		s_idx = s_idx + 1;
	}
	result = (char **)malloc(sizeof(char *) * (w_cnt + 2));
	if (result == NULL)
		return (NULL);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = ft_split_aloc_arr(s, c);
	if (result == NULL)
		return (NULL);
	if ()     
}

/*
unsigned int	word_num(char const *s, char c)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = 0;
	while (s[i] && s[i] == c)
		++i;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			++i;
		while (s[i] && s[i] == c)
			++i;
		++num;
	}
	return (num);
}

char			*set(char *ret, char *start, size_t size)
{
	if (!(ret = (char *)malloc(size)))
		return (char *)0;
	ft_strlcpy(ret, start, size);
	return (ret);
}

static char		**memfree(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return ((char **)NULL);
}

char			**ft_split(char const *str, char c)
{
	char			**ret;
	unsigned int	w_num;
	unsigned int	i;
	char			*start;

	i = 0;
	w_num = word_num(str, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (w_num + 1))))
		return (char **)0;
	while (i < w_num)
	{
		while (*str && *str == c)
			++str;
		start = (char *)str;
		while (*str && *str != c)
			++str;
		if (!(ret[i] = set(ret[i], start, str - start + 1)))
			return (memfree(ret));
		++i;
	}
	ret[i] = (char *)0;
	return (ret);
}
*/