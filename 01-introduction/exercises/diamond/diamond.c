#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "arguments must be 1\n");
        return 1;
    }

    unsigned int n = atoi(argv[1]);

    if (n == 0)
    {
        return 0;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            putchar(' ');
        }
        for (int k = 0; k < 2 * i + 1; ++k)
        {
            putchar('#');
        }
        putchar('\n');
    }

    for (int l = (int)n - 2; l >= 0; --l)
    {
        for (int m = 0; m < (int)n - 1 - l; ++m)
        {
            putchar(' ');
        }
        for (int k = 0; k < 2 * l + 1; ++k)
        {
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}
