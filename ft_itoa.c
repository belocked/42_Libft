/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:55:21 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/23 01:14:55 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_n_len(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n = n / 10;
		length = length + 1;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_n_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = 0;
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	else if (n == 0)
		result[0] = '0';
	while (n)
	{
		len--;
		result[len] = n % 10 + '0';
		n = n / 10;
	}
	return (result);
}
