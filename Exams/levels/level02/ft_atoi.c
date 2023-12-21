#include <stdio.h>
int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;

    if (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
        {
            sign=-1;
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

int main()
{
    char *str = "032159";
    int result = ft_atoi(str);
    printf("%d", result);
}