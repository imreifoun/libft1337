/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:57:52 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/28 15:58:05 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		n;
	char	*p;

	n = (count * size);
	p = (char *)malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}
