/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bosekim <bosekim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 09:39:43 by bosekim           #+#    #+#             */
/*   Updated: 2023/05/18 09:41:00 by bosekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    char    **result;

    result = ft_split_aloc_arr(s,c);
    if (result == NULL)
        return (NULL);
    if ()     
}


char    **ft_split_aloc_arr(char const *s, char c)
{
    char    **result;
    size_t     s_idx;
    size_t     w_cnt;
    
    s_idx = 0;
    w_cnt = 0;
    while (s[s_idx])
    {
        if (s[s_idx] == c)
            w_cnt = w_cnt + 1;
        s_idx = s_idx + 1;
    }
    result = (char **)malloc(sizeof(char *) * (w_cnt + 2));
    if (result == NULL)
        return (NULL);
    return (result);
}

