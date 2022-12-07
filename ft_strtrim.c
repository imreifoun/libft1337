/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:41:01 by areifoun          #+#    #+#             */
/*   Updated: 2022/11/18 01:03:52 by areifoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!set || !s1)
		return (NULL);
	start = 0;
	end = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]) && s1 && end > start)
		end--;
	return (ft_substr(s1, start, (end - start) + 1));
}
