#include "libft.h"

static char **free_array(char **t)
{
    while(*t)
    {
        free(*t);
        t++;
    }
    *t = NULL;
    return (t);
}

static char **filling_strings(char const *s, char c, char **t, size_t j, size_t l)
{
    size_t i;
    size_t k;

    i = 0;
    k = 0;
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

static char **mem_for_arrays(char const *s, char c, char **t, size_t j, size_t i)
{
    size_t  k;
    size_t  l;

    k = 0;
    l = 0;
    while (k < j && s[++i])
    {
        while (s[i] != c && s[i])
		{
            l++;
			i++;
		}
		if (l != 0)
		{
        	if (!(t[k] = malloc(sizeof(char) * (l + 1))))
            {
				t = free_array(t);
                return (t);
            }
	        k++;
		}
    }
    return (t);
}

static int count_first_array(char const *s, char c)
{
    size_t i; 
    size_t j; 

    i = 0;
    j = 0;
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
    return (j);
}

char **ft_split(char const *s, char c)
{
    size_t i; 
    char **t; 
    size_t j; 
    size_t l;

    l = 0;
    j = count_first_array(s, c);
    i = -1;
    if (!(t = malloc(sizeof(char*) * (j + 1))))
        return (NULL);
    t[j] = NULL; 
    t = mem_for_arrays(s, c, t, j, i);
    t = filling_strings(s, c, t, j, l);
    return (t);
}

/* int main()
{
	char *string = "      split       this for   me  !       ";
	char 	**gg;

	gg = ft_split(string, ' ');
    printf ("%s", *gg);
	return (0);
} */