/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 03:57:23 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/23 03:57:26 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_make_num(int flag, int n, int nb, int fd)
{
	char	print_num[13];
	int		digit;

	digit = n;
	if (flag == 0)
	{
		digit = digit + 1;
		print_num[0] = '-';
		while (n >= 1)
		{
			print_num[n] = '0' - nb % 10;
			nb = nb / 10;
			n = n - 1;
		}
	}
	else
	{
		while (n >= 1)
		{
			print_num[n - 1] = '0' + nb % 10;
			nb = nb / 10;
			n = n - 1;
		}
	}
	write (fd, print_num, digit);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;
	int	flag;
	int	cp_nb;

	flag = 1;
	nb = 0;
	cp_nb = n;
	while (cp_nb != 0)
	{
		cp_nb = cp_nb / 10;
		nb = nb + 1;
	}
	if (n < 0)
		flag = 0;
	if (n == 0)
		nb = 1;
	ft_make_num(flag, nb, n, fd);
}
