#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

void last_word(char *str)
{
    int i = ft_strlen(str) - 1;

    while (str[i] == '\t' || str[i] == ' ')
        i--;
    
    while (i > 0)
    {
        if (str[i] == '\t' || str[i] == ' ')
            break;
        i--;
    }
    i++;
    while (str[i] && (str[i] != '\t' || str[i] != ' '))
    {
        write(1, &str[i], 1);
        i++;
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