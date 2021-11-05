int ft_isalnum(int c)
{
    unsigned char n;

    n = (unsigned char)c;
    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')
        || (n >= '0' && n <= '9'))
        {
            return (1);
        }
    return(0);
}