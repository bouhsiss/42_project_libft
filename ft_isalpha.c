int ft_isalpha(int c)
{
    unsigned char n;

    n = (unsigned char)c;
    if (( n >= 'a' && n <= 'z' ) || (n >=  'A' && n <= 'Z' ))
    {
        return (1);
    }
    return (0);
}
