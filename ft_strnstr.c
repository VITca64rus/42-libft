#include "libft.h"

char	*ft_strnstr(const char *havstack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0)
		return ((char *)havstack);

	while (havstack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == havstack[i + j])
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
