/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:50:07 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 14:39:26 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		exit(0);
	new->data = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if ((*lst) == '\0')
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

int	ft_lstsize(t_list **lst)
{
	int		len;
	t_list	*head;

	head = *lst;
	len = 0;
	while (head != NULL)
	{
		head = head -> next;
		len++;
	}
	return (len);
}

t_list	*ft_lstlast(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ft_free(t_list	**a)
{
	t_list	*head;
	t_list	*temp;

	head = *a;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(a);
}
