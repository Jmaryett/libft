
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d = (char*)dst; char *s = (char*)src; int i = 0;
	if (n == 0)
		return (d);
	if (!dst && !src)
		return (NULL);
	while (n > 0 && s[i])
	{
		d[i]= s[i];
		i++;
		n--;
	}
	d[i] = '\0';
	return (d);
}
