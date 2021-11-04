char *ft_strchr(const char *s, int c)
{
    int i;
    char *str;
    char chr = (char)c;

    i = 0;
    str = (char *)s;
    while(str[i])
    {
        if (str[i] == chr)
        {
            return(str +i);
        }
        i++;
    }
    return(0);
}