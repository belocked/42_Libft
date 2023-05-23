/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 06:24:24 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/11 06:24:26 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start = start + 1;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end = end - 1;
	result = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i] = s1[start];
		i = i + 1;
		start = start + 1;
	}
	result[i] = 0;
	return (result);
}
