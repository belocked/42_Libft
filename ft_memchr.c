/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:48:21 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/20 21:26:14 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	if (s == NULL)
		return (NULL);
	while (idx < n)
	{
		if (*(unsigned char *)(s + idx) == (unsigned char)c)
			return ((void *)s + idx);
		idx = idx + 1;
	}
	return (NULL);
}
