#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *copy; size_t i = 0; size_t j = 0; size_t k = ft_strlen(s1); size_t l = 0;
	if (!s1 || !set)
		return (NULL);
	copy = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	while (s1[i] >= 9 && s1[i] <= 13 || s1[i] == ' ')
		i++;
	while (s1[k] >= 9 && s1[k] <= 13 || s1[k] == ' ')
		k--;
	while (s1[i] != s1[k])
		copy[j++] = s1[i++];
	copy[j] = '\0';
	return (copy);
}

/* int main()
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
        char *s2 = "Hello \t  Please\n Trim me !";
        char *ret = ft_strtrim(s1, " \n\t");

	printf ("%s\n", s2);
	printf ("%s", ret);
} */