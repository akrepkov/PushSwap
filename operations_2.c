/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:23:58 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 18:57:31 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **a)
{
	t_list	*head;
	t_list	*second;
	int		data_temp;
	int		index_temp;

	if (ft_lstsize(a) < 2)
		return (-1);
	head = *a;
	second = head->next;
	data_temp = head->data;
	index_temp = head->index;
	head->data = second->data;
	head->index = second->index;
	second->data = data_temp;
	second->index = index_temp;
	return (0);
}

int	sa(t_list **a)
{
	if (swap(a) == -1)
		return (-1);
	write(1, "sa\n", 3);
	return (0);
}

int	sb(t_list **b)
{
	if (swap(b) == -1)
		return (-1);
	write(1, "sb\n", 3);
	return (0);
}

int	ss(t_list **a, t_list **b)
{
	if ((ft_lstsize(a) < 2) || (ft_lstsize(b) < 2))
		return (-1);
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	return (0);
}
