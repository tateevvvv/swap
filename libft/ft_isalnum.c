/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:33:52 by tatev             #+#    #+#             */
/*   Updated: 2025/01/30 18:57:59 by tasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if (ft_isalpha(num) || ft_isdigit(num))
		return (1);
	return (0);
}

// int main(void){
// 	printf("%d", ft_isalnum('a'));
// }