/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:23:17 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/19 00:34:18 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	idx;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	idx = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[idx] && ((dstlen + idx + 1) < dstsize))
	{
		dst[dstlen + idx] = src[idx];
		idx = idx + 1;
	}
	dst[dstlen + idx] = '\0';
	return (dstlen + srclen);
}
