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
	size_t	left;
	size_t	right;
	size_t	r_idx;

	left = 0;
	right = ft_strlen(s1) - 1;
	r_idx = 0;
	while (s1[left] && ft_strchr(set, s1[left]))
		left = left + 1;
	while (left < right && ft_strchr(set, s1[right]))
		right = right - 1;
	result = (char *)malloc(sizeof(char) * (right - left + 1));
	if (result == NULL)
		return (NULL);
	while (left < right)
	{
		result[r_idx] = s1[left];
		left = left + 1;
		r_idx = r_idx + 1;
	}
	return (result);
}
