/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 22:42:12 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/18 23:13:59 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	idx;

	srcsize = 0;
	idx = 0;
	while (*(src + srcsize))
		srcsize = srcsize + 1;
	if (dstsize == 0)
		return (srcsize);
	while (src[idx] && idx + 1 < dstsize)
	{
		dst[idx] = src[idx];
		idx = idx + 1;
	}
	dst[idx] = '\0';
	return (srcsize);
}
