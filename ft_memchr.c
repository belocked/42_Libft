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
	size_t			i;
	unsigned char	*us;

	us = (void *)s;
	i = 0;
	while (i < n)
	{
		if (us[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
