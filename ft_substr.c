/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 06:24:43 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/11 06:24:45 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	r_idx;
	size_t	s_idx;

	r_idx = 0;
	s_idx = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (s[s_idx])
	{
		if (s_idx >= start && r_idx < len)
		{
			result[r_idx] = s[s_idx];
			r_idx = r_idx + 1;
		}
		s_idx = s_idx + 1;
	}
	result[r_idx] = 0;
	return (result);
}
