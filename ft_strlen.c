#include<stdio.h>

int main ()
{
    int i = 0;
    char str[] = "This is a potentially long string";

    while (str[i])
    {
        i++;
    }
    printf("%d", i);
}