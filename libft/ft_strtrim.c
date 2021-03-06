#include <malloc.h>

int char_in_set(char a, char const *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (a = set[i])
            return (1);
        i++;
    }
    return (0);
}

size_t	ft_strlen(char const *str)
{
	size_t len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
    return dest;
}


char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    char *ptr;

    start = 0;
    while (s1[start])
    {
        if (!char_in_set(s1[start], set))
            break ;
        start++;
    }
    end = ft_strlen(s1);
    while (end > 0)
    {
        end--;
        if (!char_in_set(s1[end], set))
            break ;
    }
    ptr = (char *)malloc(end - start + 1);
    ft_strncpy(ptr, (s1 + start), end - start);
    return (ptr);
}
