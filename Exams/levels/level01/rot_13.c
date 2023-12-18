#include <unistd.h>

void rot_13(char *str)
{
    int i = 0;

    while (str[i])
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            if (str[i] >= 65 && str[i] <= 90)
            {
                if (str[i] >= 65 && str[i] <= 77)
                {
                    str[i] = str[i] + 13;
                    write(1, &str[i], 1);
                }
                else
                {
                    str[i] = str[i] - 13;
                    write(1, &str[i], 1);
                }
            }
            else if (str[i] >= 97 && str[i] <= 122)
            {
                if (str[i] >= 97 && str[i] <= 109)
                {
                    str[i] = str[i] + 13;
                    write(1, &str[i], 1);
                }
                else
                {
                    str[i] = str[i] - 13;
                    write(1, &str[i], 1);
                }
            }
        }
        else 
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
        rot_13(av[1]);
    }
    write(1, "\n", 1);
}