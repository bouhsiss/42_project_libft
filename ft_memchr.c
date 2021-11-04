#include<string.h>
char *ft_strchr(const char *s, int c, size_t n)
{
    int i;
    char *str;
    char chr = (char)c;

    i = 0;
    str = (char *)s;
    while(i < n)
    {
        if (str[i] == chr)
        {
            return(str +i);
        }
        i++;
    }
    return(0);
}
