#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;

	while (i < n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return ((unsigned char)s1[i]-(unsigned char)s2[i]);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return ((unsigned char)s1[i]-(unsigned char)s2[i]);
		if ((unsigned char)s1[i] == '\0' || (unsigned char)s2[i] == '\0')
			return ((unsigned char)s1[i]-(unsigned char)s2[i]);
		i++;
	}
	return (0);
}