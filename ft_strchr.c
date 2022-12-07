/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:35:16 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/29 12:50:42 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	char			d;
	unsigned int	i;

	i = 0;
	d = (char)c;
	str = (char *)s;
	while (str[i] != '\0' && str[i] != d)
		i++;
	if (str[i] == d)
		return (str + i);
	return (NULL);
}
