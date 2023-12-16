#include <unistd.h>

int main()
{
    int num = 0;
    char alfa1 = 122;
    char alfa2 = 89;

    while (num < 13)
    {
        write(1, &alfa1, 1);
        write(1, &alfa2, 1);

        alfa1 = alfa1 - 2;
        alfa2 = alfa2 - 2;
        
        num++;
    }
    write(1, "\n", 1);
}