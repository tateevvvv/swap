/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 22:25:43 by tasargsy          #+#    #+#             */
/*   Updated: 2025/01/27 21:00:52 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nsize;
	size_t	haysize;

	i = 0;
	nsize = ft_strlen(needle);
	haysize = ft_strlen(haystack);
	if (nsize == 0)
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	while ((i + nsize) <= len && i < haysize)
	{
		if (ft_strncmp(haystack + i, needle, nsize) == 0)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char	*s1 = "gti_ay_es_textygdkycshb";
// 	char	*s2 = "es_texty";
// 	printf("%s", ft_strnstr(s1, s2, 30));
// 	return (0);
// }