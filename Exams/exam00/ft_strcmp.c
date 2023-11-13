#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

int    ft_strcmp(char *s1, char *s2)
{
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);

    return(len1 - len2);
}

int main()
{
    char *s1 = "hello55";
    char *s2 = "hello";
    printf("%d" ,ft_strcmp(s1, s2));
}