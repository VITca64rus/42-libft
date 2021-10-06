#include "libft.h"
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t size)
{
	size_t len_src = ft_strlen(src);
	if (len_src + 1 < size)
        ft_memcpy(dst, src, len_src + 1);
	else if (size != 0) {
        ft_memcpy(dst, src, size - 1);
        dst[size-1] = '\0';
    }
    return len_src;
}