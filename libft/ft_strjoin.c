/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:37:35 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/01 18:29:22 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len1;
	int		len2;
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	while (s1[++i] != '\0')
		str[i] = s1[i];
	while (s2[++j] != '\0')
	{
		str[i] = s2[j];
		i++;
	}
	str[len1 + len2] = '\0';
	return (str);
}

// int main()
// {
// 	char zibil[] = "eshutyun";
// 	char myusy[] = " ankap";
// 	printf("%s\n", ft_strjoin(zibil, myusy));
// 	return (0);
// }