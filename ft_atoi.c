#include"libft.h"
int ft_atoi(const char *str)
{
        int i;
        int n;
        int sign;
        char *ptr = (char *)str; 

        n = 0;
        sign = 1;
        
        while (*str == ' ' || *str == '\t' || *str == '\r'
            || *str == '\n' || *str == '\v' || *str == '\f')
            str++;
        
        if (*str == '-')
        {
            sign *= -1;
            str++;
        }
        else if (*str == '+')
            str++;
        while(*str >= '0' && *str <= '9')
        {
            n = n * 10 + (*str - 48);
            str++;
        }
        return(n * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "2147483647");
   val = ft_atoi(str);
   printf("String value = %s, Int value =%d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value =%d\n", str, val);


   return(0);
}*/