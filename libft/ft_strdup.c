/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:58:32 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/12 19:16:56 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	i;
	size_t	size;

	size = ft_strlen(s1);
	i = 0;
	arr = (char *)malloc((sizeof (char)) * size + 1);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = s1[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

// int main(void){
// 	char *s;
// 	s = "quns tanuma";
// 	printf("%s", ft_strdup(s));
// }