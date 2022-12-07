/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:07:16 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/23 04:52:22 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*chng;

	if (!s || !f)
		return (NULL);
	chng = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!chng)
		return (NULL);
	while (s[i])
	{
		chng[i] = f(i, s[i]);
		i++;
	}
	chng[i] = '\0';
	return (chng);
}
