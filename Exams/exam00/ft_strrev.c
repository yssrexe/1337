#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
    
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char swp;

    while(i < len)
    {
        swp = str[i];
        str[i] = str[len];
        str[len] = swp;

        i++;
        len--;
    }
    return (str);
}

int main()
{
	char str[] = "hello";
    ft_strrev(str);
    printf("%s\n", str);
    return 0;
}
