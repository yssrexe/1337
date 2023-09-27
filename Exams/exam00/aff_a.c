#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == 97)
            {
                write(1, "a", 1);
            }
        i++;
        }
    }
    else if(argc == 1)
    {
        write(1, "a", 1);
    }
    write(1, "\n", 1);
}
