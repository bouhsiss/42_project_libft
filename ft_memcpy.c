#include<string.h>
void *ft_memcpy(void *destination, const void *source, size_t n)
{
    char *dest = (char *)destination;
    char *src = (char *)source;
    int i = 0;
    while(i<n)
    {
        *dest = *src;
        i++;
        dest++;
        src++;
    }
    return(destination);
}
#include <stdio.h>

int main () {
   char dest[] = "abcde";

   printf("Before memcpy dest = %s, src = %s\n", dest, dest);
   ft_memcpy(dest +2, dest, 3);
   printf("After memcpy dest = %s, src = %s\n", dest, dest);

   return(0);
}