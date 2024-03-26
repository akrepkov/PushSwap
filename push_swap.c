/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:08:21 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 19:53:15 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack(t_list **a, char *list)
{
	t_list	*new;
	char	**args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	args = ft_split(list, ' ');
	find_repeats(args);
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		if (!new)
			ft_perror();
		ft_lstadd_back(a, new);
		i++;
	}
	while (args[j] != NULL)
	{
		free(args[j]);
		j++;
	}
	free(args);
	return (i);
}

int	sorted(t_list **a)
{
	t_list	*check;

	check = *a;
	while (check->next != NULL)
	{
		if (check->next->data < check->data)
			return (0);
		check = check->next;
	}
	return (1);
}

int	check_args(t_list **a, char **list)
{
	t_list	*new;
	int		i;

	i = 1;
	find_repeats(list);
	while (list[i])
	{
		new = ft_lstnew(ft_atoi(list[i]));
		if (!new)
			ft_perror();
		ft_lstadd_back(a, new);
		i++;
	}
	i -= 1;
	return (i);
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	int		count;

	if (argc < 2)
		return (-1);
	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	if (!a || !b)
		exit(0);
	*a = NULL;
	*b = NULL;
	if (argc == 2)
		count = check_stack(a, argv[1]);
	else
		count = check_args(a, argv);
	indexes(a);
	sorting(a, b, count);
	ft_free(a);
	ft_free(b);
	return (0);
}
