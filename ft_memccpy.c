
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d = (unsigned char*)dst; unsigned char *s = (unsigned char*)src; size_t i = 0;
	
	if (!n)
		return (NULL);
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
