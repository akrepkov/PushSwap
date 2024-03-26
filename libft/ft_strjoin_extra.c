/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:52:43 by akrepkov          #+#    #+#             */
/*   Updated: 2023/02/17 12:52:51 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_extra(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;
	char	*slash;

	i = 0;
	j = 0;
	slash = "/";
	if (!s1 || !s2)
		return (0);
	res = (char *)malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = *slash;
	i++;
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	return (res);
}
