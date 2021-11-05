#include<string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *dest = (char *)dst;
    char *sorc = (char *)src;
    int i = 0;
    while(i<n)
    {
        *dest = *sorc;
        i++;
        dest++;
        sorc++;
    }
    return(dst);
}
#include <stdio.h>

int main () {
   char dest[] = "abcde";

   printf("Before memcpy dest = %s, src = %s\n", dest, dest);
   ft_memcpy(dest +2, dest, 3);
   printf("After memcpy dest = %s, src = %s\n", dest, dest);

   return(0);
}