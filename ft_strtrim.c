#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *copy; size_t i = 0; size_t j = 0;

	if (!s1 || !set)
		return (NULL);
	copy = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		if (s1[i] == set[i])
			i++;
		copy[j] = s1[i];
		j++;
		i++;
	}
	copy[j] = '\0';
	return (copy);
}

int main()
{
	char s1[] = "\t \n  \n12345dfdd\t  \n";
	char set[] = "\t\n";
	
	printf("%s", ft_strtrim(s1, set));
}