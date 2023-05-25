/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:25:09 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/24 22:20:59 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_check_white_space(char letter)
{
	if (letter != ' ' && letter != '\n' && letter != '\t'
		&& letter != '\v' && letter != '\f' && letter != '\r')
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	long long int	idx;
	int				sign;
	int				result;

	idx = 0;
	result = 0;
	sign = 1;
	while (ft_check_white_space(*(str + idx)))
		idx = idx + 1;
	if (*(str + idx) == '-' || *(str + idx) == '+')
	{
		if (*(str + idx) == '-')
			sign = -1;
		idx = idx + 1;
	}
	while (*(str + idx) >= '0' && *(str + idx) <= '9')
	{
		result = result * 10 + *(str + idx) - '0';
		idx = idx + 1;
	}
	return (sign * result);
}
