/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   added_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:24:05 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 19:25:43 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	due_to_n(t_list **a, int min)
{
	t_list	*head;

	head = *a;
	if (head->next->index == min)
		ra(a);
	else
	{
		sa(a);
		rra(a);
	}
}

void	indexes(t_list **a)
{
	t_list	*head;
	int		i;

	i = 0;
	head = find_min_list(a, -2147483649);
	while (head)
	{
		head->index = i;
		head = find_min_list(a, head->data);
		i++;
	}
}

int	ft_strcmp(char *p1, char *p2)
{
	int	i;

	i = 0;
	while (p1[i] != '\0' || p2[i] != '\0')
	{
		if (p1[i] > p2[i])
			return (1);
		if (p1[i] < p2[i])
			return (-1);
		i++;
	}
	return (0);
}
