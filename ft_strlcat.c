#include <string.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    int len;
    char *src2;
    int destlen;
    int srclen;

    i = 0;
    src2 = (char*)src;
    destlen = ft_strlen(dst);
    srclen = ft_strlen(src2);
    int *size = (int *)dstsize;
    len = dstsize - destlen - 1;
    while(src2[i] != '\0'  && i<len )
    {
        dst[destlen + i] = src2[i];
        i++;
    }
    return(srclen + destlen);
}