#include <stdio.h>

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == 32  || (str[i] >= 9 && str[i] <= 13))
        i++;

    if (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
            sign = -1;
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}

int ft_do_op(int a, int b, char operator)
{
    int result = 0;
    if (operator == '*')
        result = a * b;
    else if (operator == '-')
        result = a - b;
    else if (operator == '+')
        result = a + b;
    else if (operator == '/')
        result = a / b;
    else if (operator == '%')
        result = a % b;

    return (result);
}

int main(int argc , char **argv)
{
    // to test "*" use "*/" bcuz the compiler read "*" as a command
    if (argc == 4)
    {
        int result = 0;
        int nb1 = ft_atoi(argv[1]);
        int nb2 = ft_atoi(argv[3]);

        result = ft_do_op(nb1 ,nb2, argv[2][0]);
        printf("%d", result);
    }
    printf("\n");
}