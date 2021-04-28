#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *copy; size_t i = 0; size_t j = ft_strlen(s1); size_t k = ft_strlen(set); size_t l = 0;

	if (!s1 || !set)
		return (NULL);
	copy = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	while (s1[i] == set[i])
		i++;
	
	copy[l] = '\0';
	return (copy);
}