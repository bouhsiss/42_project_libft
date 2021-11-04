#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char *c1 = (char *)s1;
    char *c2 = (char *)s2;
    int i;
    
    i = 0;
    while (c1[i] && c2[i] && i < n-1 && c1[i] == c2[i])
    {
        i++;
    }
    return(c1[i] - c2[i]);
}