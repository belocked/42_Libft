#include<stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char*)malloc(sizeof(char) * len);
	if (result == NULL)
		return ((char *)NULL);
	ft_strlcpy(result, s1, ft_strlen(s1) + 1);
	ft_strlcat(result, s2, ft_strlen(s2));
	return (result);
}
