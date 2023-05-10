#include<stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	

	len = 0;
	idx = 0;
	while (s1[idx] && ft_strchr(set, s1[idx]))
		idx = idx + 1;
	
}
