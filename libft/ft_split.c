/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:54:42 by akrepkov          #+#    #+#             */
/*   Updated: 2023/07/08 18:56:18 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(const char *s, char c);
static int	ft_wtw(const char *s, char c, int i);
static void	freelst(int j, char **res);
static int	ft_thestart(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		len;

	j = 0;
	i = ft_words(s, c);
	res = malloc(sizeof(char *) * (i + 1));
	if (!res || !s || i == 0)
		ft_perror();
	while (j < i)
	{
		s += ft_thestart(s, c);
		len = ft_wtw(s, c, 0);
		res[j] = ft_substr(s, 0, len);
		if (!(res[j]))
		{
			freelst(j, res);
			exit (0);
		}
		j++;
		s += len;
	}
	res[j] = 0;
	return (res);
}

static int	ft_thestart(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static void	freelst(int j, char **res)
{
	j--;
	while (j >= 0)
	{
		free(res[j]);
		j--;
	}
	free(res);
}

static int	ft_words(const char *s, char c)
{
	int	i;
	int	word;
	int	len;

	len = ft_strlen(s);
	i = 0;
	word = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			word++;
			while (s[i] == c)
				i++;
		}
		if (s[i] == '\0')
			return (word);
		i++;
	}
	if (s[len - 1] != c && s[0] != '\0')
		word++;
	return (word);
}

static int	ft_wtw(const char *s, char c, int i)
{
	int	wtw;

	wtw = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		wtw++;
		i++;
	}
	return (wtw);
}
