/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:22:55 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/07 20:46:11 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*head_a;
	t_list	*head_b;

	if (ft_lstsize(b) == 0)
		return (-1);
	head_a = *a;
	head_b = *b;
	tmp = head_b;
	head_b = head_b->next;
	*b = head_b;
	if (!head_a)
	{
		head_a = tmp;
		head_a->next = NULL;
		*a = head_a;
	}
	else
	{
		tmp->next = head_a;
		*a = tmp;
	}
	write(1, "pa\n", 3);
	return (0);
}

int	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*head_b;
	t_list	*head_a;

	if (ft_lstsize(a) == 0)
		return (-1);
	head_b = *b;
	head_a = *a;
	tmp = head_a;
	head_a = head_a->next;
	*a = head_a;
	if (!head_b)
	{
		head_b = tmp;
		head_b->next = NULL;
		*b = head_b;
	}
	else
	{
		tmp->next = head_b;
		*b = tmp;
	}
	write(1, "pb\n", 3);
	return (0);
}

int	ra(t_list **a)
{
	t_list	*head;
	t_list	*last;

	if (ft_lstsize(a) < 2)
		return (-1);
	head = *a;
	last = ft_lstlast(head);
	*a = head->next;
	head->next = NULL;
	last->next = head;
	write(1, "ra\n", 3);
	return (0);
}

int	rb(t_list **b)
{
	t_list	*head;
	t_list	*last;

	if (ft_lstsize(b) < 2)
		return (-1);
	head = *b;
	last = ft_lstlast(head);
	*b = head->next;
	head->next = NULL;
	last->next = head;
	write(1, "rb\n", 3);
	return (0);
}

int	rr(t_list **a, t_list **b)
{
	if ((ft_lstsize(a) < 2) || (ft_lstsize(b) < 2))
		return (-1);
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
	return (0);
}
