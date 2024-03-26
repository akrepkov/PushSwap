/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:03:38 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 19:46:42 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_number(long long num, char *nptr)
{
	int	i;

	i = 0;
	while (nptr[++i])
	{
		if (nptr[i] > 57 || nptr[i] < 47)
			ft_perror();
	}
	if (num == INT_MIN || num == INT_MAX)
		return (true);
	else if ((num == 0 && *nptr != '0') || num > 2147483647
		|| num < -2147483648)
		return (false);
	else
		return (true);
}

int	ft_atoi(char *nptr)
{
	int			i;
	long long	num;
	int			negative;

	i = 0;
	num = 0;
	negative = 1;
	if (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			negative *= -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		num = num * 10 + nptr[i] - '0';
		i++;
	}
	if (!is_number(num * negative, nptr))
		ft_perror();
	return (num * negative);
}

void	find_repeats(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_strcmp(args[i], args[j]) == 0)
				ft_perror();
			j++;
		}
		i++;
	}
}
