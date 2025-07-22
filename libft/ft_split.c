/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:18:26 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/08 16:39:38 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char c)
{
	size_t	count;
	int		inword;

	count = 0;
	while (*str)
	{
		inword = 0;
		while (*str && *str == c)
			++str;
		while (*str && *str != c)
		{
			if (!inword)
			{
				count++;
				inword = 1;
			}
			++str;
		}
	}
	return (count);
}

static void	*freearr(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	const char	*new_s;
	char		**arr;
	int			words_count;
	int			i;

	if (!s)
		return (NULL);
	words_count = word_count(s, c);
	arr = (char **)malloc((words_count + 1) * (sizeof(char *)));
	if (!arr)
		return (NULL);
	i = -1;
	while (++i < words_count)
	{
		while (*s == c)
			s++;
		new_s = s;
		while (*s && *s != c)
			s++;
		arr[i] = ft_substr(new_s, 0, s - new_s);
		if (!arr[i])
			return (freearr(arr));
	}
	arr[i] = NULL;
	return (arr);
}
