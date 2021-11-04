#include<strings.h>
void ft_bzero(void *s, size_t n)
{
    char *c = (char *)s;
    if (n != 0)
    {
        while (n)
        {
            *c = 0;
            n--;
            s++;
        }
    }
}
