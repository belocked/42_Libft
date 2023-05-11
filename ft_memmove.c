/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 05:52:39 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/11 09:15:59 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			idx;

	idx = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		while (idx < len)
		{
			*(unsigned char *)(dst + idx) = *(unsigned char *)(src + idx);
			idx = idx + 1;
		}
	}
	else
	{
		idx = len;
		while (idx)
		{
			idx = idx - 1;
			*(unsigned char *)(dst + idx) = *(unsigned char *)(src + idx);
		}
	}
	return (dst);
}
