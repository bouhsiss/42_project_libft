int ft_isdigit(int c)
{
    unsigned char n;

    n = (unsigned char)c;
    if ( n >= '0' && n <= '9')
    {
        return(1);
    }
    return(0);
}
