/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:25:09 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/29 03:14:10 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	idx;
	int				sign;
	int				result;

	idx = 0;
	result = 0;
	sign = 1;
	while (*(str + idx) == '\t' || *(str + idx) == ' ')
		idx = idx + 1;
	if (*(str + idx) == '-')
	{
		idx = idx + 1;
		sign = -1;
	}
	while (*(str + idx) >= '0' && *(str + idx) <= '9')
	{
		result = result * 10 + *(str + idx) - '0';
		idx = idx + 1;
	}
	return (sign * result);
}
