#include <unistd.h>

void print_param(char *str)
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
    int i = ac -1;
    if (ac >= 2)
    {
        print_param(av[i]);
    }
    write(1, "\n", 1);
}
