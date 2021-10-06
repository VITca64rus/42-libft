#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] > ss2[i])
			return (ss1[i]-ss2[i]);
		else if (ss1[i] < ss2[i])
			return (ss1[i]-ss2[i]);
		i++;
	}
	return (0);
}