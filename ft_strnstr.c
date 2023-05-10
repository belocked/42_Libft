/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 00:30:43 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/29 02:23:38 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	check_idx;

	idx = 0;
	check_idx = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (idx < len && *(haystack + idx))
	{
		if (*(haystack + idx) == *needle)
		{
			check_idx = 0;
			while (*(haystack + idx + check_idx) == *(needle + check_idx))
			{
				check_idx = check_idx + 1;
				if (len < (idx + check_idx))
					return (0);
				if (*(needle + check_idx) == 0)
					return ((char *)haystack + idx);
			}
		}
		idx = idx + 1;
	}
	return (0);
}
