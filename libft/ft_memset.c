/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 23:54:38 by tatev             #+#    #+#             */
/*   Updated: 2025/02/12 19:16:31 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int src, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) dst;
	while (len > 0)
	{
		*(tmp++) = (unsigned char) src;
		len--;
	}
	return (dst);
}

/*int main() {
    char buffer[10] = "1234567890";
    ft_memset(buffer, 'A', 7);

    printf("%s\n", buffer);  
    return 0;
}*/