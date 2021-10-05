#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i;

	printf("------TEST FT_ISALPHA------\n");
	if (ft_isalpha('A') != 0 && ft_isalpha('z') != 0 && ft_isalpha('.') == 0)
		printf("OK\n");
	else
		printf("NO\n");
	printf("------TEST FT_ISDIGIT------\n");
	if (ft_isdigit('A') == 0 && ft_isdigit('z') == 0 \
		&& ft_isdigit('.') == 0 && ft_isdigit('4') != 0)
		printf("OK\n");
	else
		printf("NO\n");
	printf("------TEST FT_ISALNUM------\n");
	if (ft_isalnum(-1) == 0 && ft_isalnum('z') != 0 \
		&& ft_isalnum('.') == 0 && ft_isalnum('4') != 0)
		printf("OK\n");
	else
		printf("NO\n");
	printf("------TEST FT_ISASCII------\n");
	if (ft_isascii('A') != 0 && ft_isascii('z') != 0 \
		&& ft_isascii('.') != 0 && ft_isascii('4') != 0)
		printf("OK\n");
	else
		printf("NO\n");
	printf("------TEST FT_ISPRINT------\n");
	if (ft_isprint('A') != 0 && ft_isprint('z') != 0 \
		&& ft_isprint('.') != 0 && ft_isprint('4') != 0 \
		&& ft_isprint('\t') == 0)
		printf("OK\n");
	else
		printf("NO\n");
	printf("------TEST FT_STRLEN------\n");
	if (ft_strlen("viktor") == 6 && ft_strlen(".") == 1)
		printf("OK\n");
	else
		printf("NO\n");
	printf("------TEST FT_MEMSET------\n");
	unsigned char src[15]="1234567890";
	unsigned char srcc[15]="1234567890";

	ft_memset (src, '1', 10);
	memset (srcc, '1', 10);
	i = 0;
	while (i < 10)
	{
		if (src[i] == srcc[i])
			i++;
		else
			break;
	}
	if (i == 10)
		printf("OK\n");
	else
		printf("NO\n");
	
	printf("------TEST FT_BZERO------\n");
	unsigned char src1[15]="1234567890";
	unsigned char srcc1[15]="1234567890";

	ft_bzero (src1, 10);
	bzero (srcc1, 10);
	i = 0;
	while (i < 10)
	{
		if (src1[i] == srcc1[i])
			i++;
		else
			break;
	}
	if (i == 10)
		printf("OK\n");
	else
		printf("NO\n");


	printf("------TEST FT_MEMCPY------\n");
	char str1[] = "Viktor";
	char str2[40];
	ft_memcpy (str2, str1, 6);
	i = 0;
	while (i < 6)
	{
		if (str1[i] == str2[i])
			i++;
		else
			break;
	}
	if (i == 6)
		printf("OK\n");
	else
		printf("NO\n");


	printf("------TEST FT_MEMMOVE------\n");
	char str3[] = "Viktor";
	ft_memmove(&str3[2], &str3[0], 3);
	printf("%s", str3);
}
