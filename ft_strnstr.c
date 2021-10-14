/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazelda <sazelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:28:58 by sazelda           #+#    #+#             */
/*   Updated: 2021/10/11 18:57:45 by sazelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *havstack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)havstack);
	if (len == 0)
		return (NULL);
	while (havstack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == havstack[i + j] && i + j < len)
		{
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&havstack[i]);
		else if (j != 0)
			return ((void *)0);
		i++;
	}
	return ((void *)0);
}
