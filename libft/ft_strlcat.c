/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:25:02 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/12 19:17:35 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (!dstsize)
		return (s_len);
	if (d_len >= dstsize)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && d_len + i < dstsize - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

// int main(void){
// 	char src[7] = "barigun";
// 	char dst[4] = "jox";
// 	ft_strlcat(dst, src, 100);
// 	printf("%s", dst);
// 	return 0;
// }