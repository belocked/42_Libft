/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:51:33 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/13 21:27:53 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (letter >= 65 && letter <= 90)
		return (1);
	else if (letter >= 97 && letter <= 122)
		return (1);
	return (0);
}