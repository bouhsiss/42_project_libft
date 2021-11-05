#include <string.h>
void *ft_memset(void *dst, int c, size_t len)
{
    char *s =(char *)dst;
    while (len)
    {
        *s = c;
        len--;
        s++;
    }
    return(s);
}
