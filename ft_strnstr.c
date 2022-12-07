/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:47:17 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/28 02:01:39 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *hayst, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	if (!hayst && !len)
		return (NULL);
	if (!*need || (len == 0 && !need))
		return ((char *)hayst);
	i = 0;
	while (hayst[i] != '\0' && i < len)
	{
		j = 0;
		if (hayst[i] == need[j])
		{
			while (hayst[i + j] == need[j] && need[j] != '\0' && i + j < len)
				j++;
			if (need[j] == '\0')
				return ((char *)(hayst + i));
		}
		i++;
	}
	return (0);
}
