#include<string.h>
void *ft_memmove(void *destination, const void *source, size_t len)
{
   char *dest;
   char *src;
   char temp[len];
   int i;

   dest = (char *)destination;
   src = (char *)source;
   i=0;
   while (i < len)
   {
      temp[i] = *src;
      i++;
      src++;
   }
   i=0;
   while(i<len)
   {
      *dest = temp[i];
      dest++;
      i++;
   }
   return(destination);
}
#include<stdio.h>
int main () {
   char dest[] = "abcde";

   printf("Before memmove dest = %s, src = %s\n", dest, dest);
   ft_memmove(dest +2, dest, 3);
   printf("After memmove dest = %s, src = %s\n", dest, dest);

   return(0);
}