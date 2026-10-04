#include <stdio.h>

int main()
{
    int in_comment = 0;
    int input;

    while ((input = getchar()) != EOF)
    {
        if (in_comment)
        {
            putchar(input);
            if (input == '\n')
            {
                in_comment = 0;
            }
        }
        else
        {
            if (input == '#')
            {
                in_comment = 1;
            }
        }
    }

    return 0;
}
