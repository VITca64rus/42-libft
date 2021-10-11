#include "libft.h"

static unsigned int	ft_count_word(char const *s, char c)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (s[i] == c && c != '\0')
		i++;
	if (i == 0 && s[i] != c)
	{
		res++;
		i++;
	}
	while (s[i])
	{
		if ((s[i - 1] == c && s[i] != c))
			res++;
		i++;
	}
	return (res);
}

static unsigned int	ft_get_id_next_word(const char *s, char c, unsigned int *i)
{
	while (s[*i] == c)
		*i = *i + 1;
	if (*i == 0 && s[*i] != c)
		return (*i);
	while (s[*i])
	{
		if ((s[*i - 1] == c && s[*i] != c))
			return (*i);
		*i = *i + 1;
	}
	return (ft_strlen(s) + 1);
}

static unsigned int	ft_get_length_word(const char *s, char c, unsigned int *i)
{
	unsigned int	res;

	res = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		*i = *i + 1;
		res++;
	}
	return (res);
}

static void	ft_clean_all(char **res, unsigned int j)
{
	j--;
	while (j >= 0)
	{
		free(res[j]);
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count_word;
	char			**res;
	unsigned int	i;
	unsigned int	j;
	unsigned int	start_word;
	unsigned int	length_word;

	if (!s)
		return ((void *)0);
	count_word = ft_count_word(s, c);
	res = (char **)malloc(sizeof(char *) * (count_word + 1));
	if (!res)
		return ((void *)0);
	i = 0;
	j = 0;
	while (j < count_word)
	{
		start_word = ft_get_id_next_word(s, c, &i);
		length_word = ft_get_length_word(s, c, &i);
		res[j] = ft_substr(s, start_word, length_word);
		if (!res[j])
			ft_clean_all(res, j);
		j++;
	}
	res[j] = ((void *)0);
	return (res);
}
