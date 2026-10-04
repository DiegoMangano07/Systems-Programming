#include <stdio.h>

#define SIZE 1024

int main()
{
    int c;
    char vet[SIZE];
    int len = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {

            for (int i = len - 1; i >= 0; --i)
            {
                putchar(vet[i]);
            }
            putchar('\n');
            len = 0;
        }
        else
        {

            if (len < SIZE)
            {
                vet[len] = c;
                ++len;
            }
        }
    }

    if (len > 0)
    {
        for (int i = len - 1; i >= 0; --i)
        {
            putchar(vet[i]);
        }
    }

    return 0;
}
