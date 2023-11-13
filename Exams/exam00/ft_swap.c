#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int swp = 0;

    swp = *a;
    *a = *b;
    *b = swp;
}

int main()
{
    int a = 1;
    int b = 4;
    ft_swap(&a, &b);

    printf(" a : %d, b : %d", a , b);
}