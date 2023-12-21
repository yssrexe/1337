#include <unistd.h>

void ft_rotone(char *str)
{
    int i = 0;

    while (str[i])
    {
        if ((str[i] >= 64 && str[i] <= 89) || (str[i] >= 96 && str[i] <= 121))
        {
            str[i]++;
            write(1, &str[i], 1);
        }
        else if (str[i] == 90 || str[i] == 122)
        {
            str[i]-=25;
            write(1, &str[i], 1);
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac , char **av)
{
    if (ac == 2)
    {
        ft_rotone(av[1]);
    }
    write(1, "\n", 1);
}