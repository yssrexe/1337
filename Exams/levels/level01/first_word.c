#include <unistd.h>

void first_word(char *str)
{
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while (str[i])
    {
        if (!(str[i] == ' ' || str[i] == '\t'))
        {
            write(1, &str[i], 1);
        }
        else
        {
            break;
        }
        
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        first_word(av[1]);
    }
    write(1, "\n", 1);
}