#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*res;
	i = 0;
	if (!s)
		return ((void *)0);
	res = ft_strdup(s);
	if (!res)
		return ((void *)0);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
