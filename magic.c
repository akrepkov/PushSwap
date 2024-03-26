/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:08:21 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 16:34:25 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a)
{
	t_list	*head;
	int		min;
	int		next_min;

	head = *a;
	min = find_min(a);
	next_min = find_next_min(a, min);
	if (sorted(a))
		return ;
	if (head->index == min)
	{
		rra(a);
		sa(a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(a);
		else
			rra(a);
	}
	else
		due_to_n(a, min);
}

void	sort_4(t_list **a, t_list **b)
{
	int	distance;

	if (sorted(a))
		return ;
	distance = find_distance(a, find_min(a));
	if (distance == 1 || distance == 2)
	{
		ra(a);
		if (distance == 2)
			ra(a);
	}
	else if (distance == 3)
		rra(a);
	if (sorted(a))
		return ;
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_list **a, t_list **b)
{
	int	distance;

	distance = find_distance(a, find_min(a));
	if (distance == 1 || distance == 2)
	{
		ra(a);
		if (distance == 2)
			ra(a);
	}
	else if (distance == 3 || distance == 4)
	{
		rra(a);
		if (distance == 3)
			rra(a);
	}
	if (sorted(a))
		return ;
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}

void	radix(t_list **a, t_list **b)
{
	int		size;
	int		bits;
	int		i;
	int		j;
	t_list	*head;

	size = ft_lstsize(a);
	bits = find_bits(a);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			head = *a;
			if ((head->index >> i & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (ft_lstsize(b) != 0)
			pa(a, b);
		i++;
	}
}

void	sorting(t_list **a, t_list **b, int count)
{
	t_list	*head;

	head = *a;
	if (sorted(a))
		return ;
	if (count == 2)
	{
		if (head->index > head->next->index)
			sa(a);
	}
	else if (count == 3)
		sort_3(a);
	else if (count == 4)
		sort_4(a, b);
	else if (count == 5)
		sort_5(a, b);
	else if (count > 5)
		radix(a, b);
}
