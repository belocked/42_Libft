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

size_t	ft_tmp_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len = len + 1;
	return (len);
}

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	idx;

	dstlen = ft_tmp_strlen(dst);
	srclen = ft_tmp_strlen(src);
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
