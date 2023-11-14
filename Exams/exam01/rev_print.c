#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
    
}

char *ft_rev_print (char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    while (str[len])
    {
        write(1, &str[len], 1);
        len--;
    }
    return(str);
}

int main()
{
	char str[] = "yassir";
	ft_rev_print(str);
}