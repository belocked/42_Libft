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
	while (*(char *)s && n > 0)
	{
		if (*(char *)s == c)
			return ((char *)(s));
		s = s + 1;
		n = n - 1;
	}
	return (NULL);
}
