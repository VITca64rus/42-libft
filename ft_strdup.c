#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t size;

	size = ft_strlen(s1);
	res = malloc(size + 1);
	if (!res)
		return ((void *)0);
	ft_memcpy(res, s1, size + 1);
	return (res);
}
