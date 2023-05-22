/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 06:21:49 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/11 06:24:12 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	idx1;
	size_t	idx2;

	idx1 = 0;
	idx2 = 0;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return ((char *) NULL);
	while (idx1 < ft_strlen(s1))
	{
		result[idx1] = s1[idx1];
		idx1 = idx1 + 1;
	}
	while (idx2 < ft_strlen(s2))
	{
		result[idx1] = s2[idx2];
		idx1 = idx1 + 1;
		idx2 = idx2 + 1;
	}
	result[idx1] = 0;
	return (result);
}
