/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazelda <sazelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:27:45 by sazelda           #+#    #+#             */
/*   Updated: 2021/10/11 17:37:28 by sazelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*r;

	r = (unsigned char *)s;
	i = 0;
	while (r[i] && i < n)
	{
		if (r[i] == (unsigned char)c)
			return ((void *)&r[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((void *)&r[i]);
	return ((void *)0);
}
