/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:43:37 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 19:48:34 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include "./libft/libft.h"
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *head);
void	sorting(t_list **a, t_list **b, int count);
int		check_stack(t_list **a, char *list);
void	sort_3(t_list **a);
int		sorted(t_list **a);
int		find_next_min(t_list **a, long long min);
int		find_min(t_list **a);
void	sort_4(t_list **a, t_list **b);
int		find_distance(t_list **a, int c);
void	sort_5(t_list **a, t_list **b);
void	indexes(t_list **a);
t_list	*find_min_list(t_list **a, long long min);
int		find_bits(t_list **a);
void	radix(t_list **a, t_list **b);
bool	is_number(long long num, char *nptr);
void	find_repeats(char **args);
void	due_to_n(t_list **a, int min);
int		sa(t_list **a);
int		sb(t_list **b);
int		ss(t_list **a, t_list **b);
int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **a, t_list **b);
int		pb(t_list **a, t_list **b);
int		ra(t_list **a);
int		rb(t_list **b);
int		rr(t_list **a, t_list **b);
int		rra(t_list **a);
int		rrr(t_list **a, t_list **b);
int		rrb(t_list **b);
int		ft_atoi(char *nptr);
void	ft_free(t_list	**a);
int		check_args(t_list **a, char **list);
int		ft_strcmp(char *p1, char *p2);

#endif
