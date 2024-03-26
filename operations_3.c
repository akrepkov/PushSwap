/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:24:40 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/07 20:54:44 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_list **a)
{
	t_list	*head;
	t_list	*last;

	if (ft_lstsize(a) < 2)
		return (-1);
	head = *a;
	last = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
	return (0);
}

int	rrb(t_list **b)
{
	t_list	*head;
	t_list	*last;

	if (ft_lstsize(b) < 2)
		return (-1);
	head = *b;
	last = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
	return (0);
}

int	rrr(t_list **a, t_list **b)
{
	if ((ft_lstsize(a) < 2) || (ft_lstsize(b) < 2))
		return (-1);
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
	return (0);
}
