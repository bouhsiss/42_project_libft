#include"libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int	i;
	int	j;
    char *big;
    char *lill;

	i = 0;
    big = (char *)haystack;
    lill = (char *)needle;
	if (lill[0] == '\0')
	{
		return (big);
	}
	while (big[i] && i < len )
	{
		j = 0;
		while (lill[j] != '\0' && i+j  < len && big[i + j] == lill[j])
		{
			if (lill[j + 1] == '\0')
			{
				return (&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
     char hay[900] = "hello my name is";
     char nedl[900] = "my";
    char *bobia = ft_strnstr(hay, nedl, 9);
    printf("%s", bobia);

}
