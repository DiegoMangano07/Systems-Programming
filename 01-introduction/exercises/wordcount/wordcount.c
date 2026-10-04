#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int input;
    int count = 0;
    int in_word = 0;

    while ((input = getchar()) != EOF)
    {
        if (isspace(input))
        {
            in_word = 0;
        }
        else
        {
            if (in_word == 0)
            {
                count++;
                in_word = 1;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

// wordcount output is equal to:
// terminal : wc -w
