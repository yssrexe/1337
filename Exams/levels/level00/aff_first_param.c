#include <unistd.h>

void print_aff(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        print_aff(av[1]);
    }
    write(1, "\n", 1);
}