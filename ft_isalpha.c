int ft_isalpha(int n)
{
    unsigned char c;

    c = (unsigned char)n;
    if (( c >= 'a' && c <= 'z' ) || (c >=  'A' && c<= 'Z' ))
    {
        return (1);
    }
    return (0);
}
