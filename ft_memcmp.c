#include<string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i = 0;
    char *c1 = (char *)s1;
    char *c2 = (char *)s2;
    while (c1[i] && c2[i] && c1[i] == c2[i] && i < n)
    {
        i++;
    }
    return(c1[i] - c2[i]);
}
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret =ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}