#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
   char *source = (char *)src;
   char *desti = (char *)dst;
   size_t i;

   i = 0;
   char *temp = 0;
   temp = (char *)malloc (len*sizeof(char));
   while (i < len)
   {
      temp[i] = source[i];
      i++;

   }
   i=0;
   while (i < len )
   {
      desti[i] = temp[i];
      i++;
   }
   free(temp);
   return(dst);
}



int main () {
   char dest[] = "abcdef";

   printf("Before memmove dest = %s, src = %s\n", dest, dest);
   ft_memmove(dest +2, dest, 3);
   printf("After memmove dest = %s, src = %s\n", dest, dest);

   return(0);
}
