/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:25:25 by tasargsy          #+#    #+#             */
/*   Updated: 2025/02/12 19:14:50 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (s);
}

/*int main(void) {
\
	char str[] = "Hello jox jan";
    ft_bzero(str, 6);
    printf("%s\n", str);
    return (0);
}*/
