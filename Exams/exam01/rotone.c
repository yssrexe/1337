#include <unistd.h>

void ft_rotone(char *str)
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] < 122))
        {
            str[i] += 1;
        }
        else if(str[i] == 90 || str[i] == 122)
        {
            str[i] -= 25;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int arc, char **arv)
{
    if (arc == 2)
    {
        ft_rotone(arv[1]);
    }
    write(1, "\n", 1);
    return 0;
}