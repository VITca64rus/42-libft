#include "libft.h"

static unsigned int	ft_count_word(char const *s, char c)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			res++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count_word;
	char			**res;

	count_word = ft_count_word(s, c);
	res = (char **)malloc(sizeof(char *) * (count_word + 1));
	while (i < count_word)
	{
		res[i] = ft_substr(s, start_word, length_word); //FIX_ME
	}
	//return (res);
}

int main()
{
	char	a[] = " I d  am   Vikt  ";
	printf("%d", ft_count_word(a, ' '));

}