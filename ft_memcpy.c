/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:22:07 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/18 20:35:19 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == NULL)
		return (NULL);
	while (n > 0)
	{
		n = n - 1;
		*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	}
	return (dst);
}
