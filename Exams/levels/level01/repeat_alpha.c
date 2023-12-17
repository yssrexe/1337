#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    while (str[i])
    {
        int num = 0;
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) 
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                num = str[i] - 64;
                while (num > 0)
                {
                    write(1, &str[i], 1);
                    num--;                    
                }
            }
            else
            {
                num = str[i] - 96;
                while (num > 0)
                {
                    write(1, &str[i], 1);
                    num--;                    
                }
            }
        } else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
    
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        repeat_alpha(av[1]);
    }
    write(1, "\n", 1);
}