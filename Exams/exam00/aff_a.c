#include <unistd.h>

int main(int arc, char  **arv)
{
    int i = 0;

    if (arc == 2)
    {
        while (arv[1][i])
        {
            if (arv[1][i] == 97)
            {
                write(1, "a", 1);
            }
            
            i++;
        }
        
    }
    else
    {
        write(1, "a", 1);
    }
    write(1, "\n", 1);
    
}