/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:21:11 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/12 18:41:12 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (const char)c)
		return ((char *)s);
	return (NULL);
}

// int main(void){
// 	char esim[] = "asdfghj";
// 	int c = 'd';
// 	printf("%s", ft_strchr(esim, c));
// 	return (0);
// }