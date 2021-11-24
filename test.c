#include"libft.h"

void mytoupper(void *ptr)
{
	
	int i;
	char *str;

	i=0;
	str = NULL;
	str = (char *)ptr;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
}

int main ()
{
    t_list *temp;
	t_list *list;
	t_list *last;
    t_list *iter;
    t_list *listota;
	char str[] = "-first content";
	char str1[] = "-normal content";
	char str2[] = "-last content";
	char *iteer;
	int i=0;
	int j=0;
	int t=0;

	list = NULL;
    
	while (i<4)
	{
		ft_lstadd_back(&list, ft_lstnew(str1));
		i++;
	}
	ft_lstadd_front(&list, ft_lstnew(str));
	ft_lstadd_back(&list, ft_lstnew(str2));
	printf("**the content of the list :\n");
    temp = list;
    listota = list;
	while (temp)
	{
		printf("%s\n", temp->content);
		temp = temp->next;
	}
	printf("\n**the size of the list : %d\n", ft_lstsize(list));
	last = ft_lstlast(listota);
	printf("\n**the last element in list :\n \t%s\n", last->content);
    iter = list;;
    printf("\n**after iteration : \n");
    while(iter)
    {
        ft_lstiter(list, mytoupper);
        printf("%s\n", iter->content);
        iter = iter->next;
    }
}