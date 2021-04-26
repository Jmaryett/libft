
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d = (char*)dst; char *s = (char*)src; size_t i = 0;
	
	if ((!dst && !src) || !len || ft_strlen(dst) + 1 < len)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++:
		}
	}
	return (d);	
}
