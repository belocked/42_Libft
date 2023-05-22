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
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len)
	{
		if (s[s_len] == c)
			return ((char *) &(s[s_len]));
		s_len = s_len - 1;
	}
	return (NULL);
}
