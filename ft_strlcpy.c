#include<stdio.h>
int ft_strlen(char *src)
{
    int i;

    i=0;
    while(src[i])
        i++;
    
    return(i);
}
size_t ft_strlcpy(char *dst, const char *src,size_t dstsize)
{
    int i;

    char *src2 = (char *)src;
    i = 0;
    while (i < dstsize -1 && src[i] && dstsize != 0)
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize != 0)
    {
        dst[i] = '\0';
    }
    return(ft_strlen(src2));
}
#include<stdio.h>
int main()
{
    char dst[10];
    char src[] = "houda";
    int rt = ft_strlcpy(dst, src, 3);
    printf("the dst : %s , the return %d", dst, rt);
}