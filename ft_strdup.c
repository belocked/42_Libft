/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 05:43:07 by bosekim           #+#    #+#             */
/*   Updated: 2023/03/29 05:51:21 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s1)
{
	int		len;
	int		idx;
	char	*dup;

	len = 0;
	idx = 0;
	while (*(s1 + len))
		len = len + 1;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (*(s1 + idx))
	{
		dup[idx] = s1[idx];
		idx = idx + 1;
	}
	dup[idx] = '\0';
	return (dup);
}
