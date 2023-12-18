#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
    
}

void last_word(char *str)
{
    int len = ft_strlen(str) - 1;

    while (str[len] == '\t' || str[len] == ' ')
    {
        len--;
    }
        

    
    
    while (!(str[len] == '\t' || str[len] == ' '))
        len--;
    len++;

    while (str[len])
    {
        if (!(str[len] == '\t' || str[len] == ' '))
            write(1, &str[len], 1);
        len++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        last_word(av[1]);
    }
    write(1, "\n", 1);
}