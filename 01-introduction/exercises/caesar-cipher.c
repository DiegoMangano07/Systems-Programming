#include <stdio.h>
#include <limits.h>

// Caesar cipher
int main()
{
    const int CIPHER_SHIFT = 3;
    int c;

    while ((c = getchar()) != EOF)
    {
        c += CIPHER_SHIFT;
        if (c > UCHAR_MAX)
            c = c - (UCHAR_MAX + 1);
        putchar(c);
    }
    return 0;
}
