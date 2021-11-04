int ft_isdigit(int n)
{
    unsigned char c;

    c = (unsigned char)n;
    if ( c >= '0' && c <= '9')
    {
        return(1);
    }
    return(0);
}
