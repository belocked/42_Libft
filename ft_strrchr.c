/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 05:14:27 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/23 05:14:30 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	idx;

	idx = ft_strlen(s);
	while ((idx + 1) >= 1)
	{
		if (s[idx] == (char)c)
			return ((char *)&s[idx]);
		idx = idx - 1;
	}
	return (NULL);
}
