/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:32:31 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/27 21:42:17 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcsize;
	size_t	dstsize;
	size_t	last;

	i = 0;
	if (!size && !dst)
		return (ft_strlen(src));
	last = size -1 ;
	srcsize = ft_strlen(src);
	dstsize = ft_strlen(dst);
	if (dstsize >= size)
		return (srcsize + size);
	while (src[i] && dstsize + i < last)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (srcsize + dstsize);
}
