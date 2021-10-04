#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*res;
	size_t			i;

	res = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		res[i] = '\0';
		i++;
	}
	return (b);
}
