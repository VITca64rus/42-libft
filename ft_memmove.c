#include "libft.h"
#include <stdio.h>

void	*ft_memmove (void *dst, const void *src, size_t len)
{
	unsigned const char	*s;
	unsigned char	*d;
	size_t	i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!len || d == s)
		return (dst);
	i = 0;
	if (d > s)
	{
		len--;
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
		d[len] = s[len];
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
