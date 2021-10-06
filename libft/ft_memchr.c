#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	unsigned char *r;

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