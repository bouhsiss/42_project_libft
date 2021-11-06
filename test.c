#include <stdio.h>
#include <string.h>
void        *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *dest2;
    char    *src2;

    dest2 = (char*)dest;
    src2 = (char*)src;
    if (src2 < dest2)
    {
        dest2 += n - 1;
        src2 += n - 1;
        while (n--)
        {
            *dest2 = *src2;
            dest2--;
            src2--;
        }
    }
    else
        memcpy(dest, src, n);
    return (dest);
}
int main () {
   char dest[] = "oldstring";
   const char src[]  = "news";

   printf("Before memmove dest = %s his adress is %p, src = %s his address is %p\n", dest,dest,src,src);
   ft_memmove(dest , src, 3);
   printf("Before memmove dest = %s his adress is %p, src = %s his address is %p\n", dest,dest,src,src);

   return(0);
}
int main () {
   char dest[] = "abcdef";
   const char src[]  = "";

   printf("Before memmove dest = %s his adress is %p, src = %s his address is %p\n", dest+2,dest+2,dest,dest);
   ft_memmove(dest +2 , dest, 3);
   printf("Before memmove dest = %s his adress is %p, src = %s his address is %p\n", dest+2,dest+2,dest,dest);

   return(0);
}