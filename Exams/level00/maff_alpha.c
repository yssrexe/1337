#include <unistd.h>

int main(void)
{
    char c1 = 97;
    char c2 = 66;

    while (c1 <= 121 && c2 <= 90)
    {
        write(1, &c1, 1);
        write(1, &c2, 1);
        c1 += 2;
        c2 += 2;
    }
    write(1, "\n", 1);
}