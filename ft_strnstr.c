#include "libft.h"

char	*ft_strnstr(const char *havstack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0)
		return ((char *)havstack);
	while (i < len)
	{
		j = 0;
		printf("%c %c", needle[j], havstack[i + j]);
		while (needle[j] == havstack[i + j] && needle[j] != '\0')
			j++;
		printf("%d",j);
		if (j == ft_strlen(needle))
			return ((char *)&havstack[i]);
		else
			break;
		i++;
	}
	return ((void *)0);
}

int main()
{
	char *s1 = "see FF your FF return FF now FF";
	char *s2 = "FF";
	size_t max = ft_strlen(s1);
	//char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i2);
}