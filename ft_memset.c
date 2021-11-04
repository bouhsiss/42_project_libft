#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
    char *s =(char *)b;
    while (len)
    {
        *s = c;
        len--;
        s++;
    }
    return(s);
}
