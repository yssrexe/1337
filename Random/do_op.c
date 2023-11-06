#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == 32  || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    if (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
        {
            sign = -1;
        }
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int do_op(int a, int b, char operator)
{
    
}