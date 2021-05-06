#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	char	**t;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	i = -1;
	t = malloc(sizeof(char*) * (j + 1));
	t[j] = NULL; 

	while (k < j && s[++i])
	{
		while (s[i] != c && s[i])
		{
			l++;
			i++;
		}
		if (l != 0)
		{
			if (t[k] = malloc(sizeof(char) * (l + 1)))
				free_array(t);
			l = 0;
			k++;
		}
	}
	k = 0;
	i = 0;
	while(k < j && s[i])
	{
		if (s[i] != c)
		{
        	while (s[i] != c && s[i])
        	{
        	    t[k][l] = s[i];
        	    l++;
				i++;
        	}
        	t[k][l] = '\0';
        	l = 0;
        	k++;
		}
		i++;
    }
    return (t);
}

int main()
{
	char *string = "      split       this for   me  !       ";
	char 	**gg;

	gg = ft_split(string, ' ');
	return (0);
	
}