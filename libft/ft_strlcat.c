/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:24:40 by akrepkov          #+#    #+#             */
/*   Updated: 2023/02/12 18:00:38 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		res;
	size_t		len_dst;
	char		*pd;
	const char	*ps;

	i = 0;
	res = 0;
	pd = (char *)dst;
	ps = (char *)src;
	len_dst = ft_strlen(dst);
	if (size > len_dst)
		res = ft_strlen(src) + len_dst;
	else
		res = ft_strlen(src) + size;
	while (ps[i] && len_dst + 1 < size)
	{
		dst[len_dst] = ps[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
