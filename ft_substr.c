#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int s_len = ft_strlen(s); size_t i = 0;
	char *sub;
	if (!s)
		return (NULL);
	if (s_len < start)
	{
		sub = (char*)malloc(sizeof(char));
		sub[i] = '\0';
		return (sub);
	}
	if (s_len < len)
		len = s_len;
	sub = (char*)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start];
		i++; 
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
