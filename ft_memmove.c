#include"libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
   char *source = (char *)src;
   char *desti = (char *)dst;
   size_t i;

   i = 0;
   if (source == 0 && desti == 0)
      return (0);
   if(source < desti)
   {
      while (len)
      {
         desti[len] = source[len];
         len--;
      }
   }
   else
   {
      while(i < len)
      {
         desti[i] = source[i];
         i++;
      }
   }
   return(dst);
}

/*int main () {
   char dest[] = "oldstring";
   char src[]  = "news";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/

int main () {
   char dest[] = "0";

   printf("Before memmove dest = %s, src = %s\n", dest, dest);
   ft_memmove(dest +2, dest, 3);
   printf("After memmove dest = %s, src = %s\n", dest, dest);

   return(0);
}
