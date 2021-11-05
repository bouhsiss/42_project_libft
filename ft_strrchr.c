#include"libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i;
    char *str;
    char chr = (char)c;
    int len;

    i = 0;
    str = (char *)s;
    len = ft_strlen(str);
    while(len)
    {
        if (str[len] == chr)
        {
            return(str +len);
        }
        len--;
    }
    return(0);
}
#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}