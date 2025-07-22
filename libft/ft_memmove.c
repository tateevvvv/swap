/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:31:49 by tatev             #+#    #+#             */
/*   Updated: 2025/02/08 16:51:13 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	if (!dest && !src)
		return (NULL);
	d_ptr = (unsigned char *)dest;
	s_ptr = (unsigned char *)src;
	if (dest > src)
		while (n-- > 0)
			d_ptr[n] = s_ptr[n];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int main(void){
// 	char src[1000] = "barigun";
// 	char dst[1000];

// 	//printf("%p", ft_memmove(dst, src, 7));
// 	return 0;
// }