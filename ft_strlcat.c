#include "libft.h"
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t len_src = ft_strlen(src);
        size_t len_dst = ft_strlen(dst);
        if (len_dst > size)
                return (len_src + size);
	if (len_src < size - len_dst)
                ft_memcpy(dst + len_dst, src, len_src + 1);
	else 
        {
                ft_memcpy(dst + len_dst, src, len_src - 1);
                dst[len_dst + size - 1] = '\0';
        }
    return (len_dst + len_src);
}