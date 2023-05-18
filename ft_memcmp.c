/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:13:42 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/11 07:18:17 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*(u1 + i) && *(u2 + i) && (*(u1 + i) == *(u2 + i)) && (i + 1 < n))
		i = i + 1;
	return (*(u1 + i) - *(u2 + i));
}
