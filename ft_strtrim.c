/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 06:24:24 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/11 06:24:26 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	

	len = 0;
	idx = 0;
	while (s1[idx] && ft_strchr(set, s1[idx]))
		idx = idx + 1;
	
}
