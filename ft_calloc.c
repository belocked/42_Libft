/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:15:21 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/29 05:39:28 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	size_t	idx;
	void	*result;

	idx = 0;
	total = count * size;
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	result = (void *)malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
