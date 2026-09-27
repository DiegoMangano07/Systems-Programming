#include <stdio.h>

int main()
{
    int c;
    unsigned int count = 0;

    printf(" count  getchar  feof  ferror\n");
    do
    {
        c = getchar();
        printf("%6u  %7d  %4s  %6s\n",
               count, c,
               (feof(stdin) ? "yes" : "no"),    // return true (!= 0) if the standard input stream has reached the end of the stream
               (ferror(stdin) ? "yes" : "no")); // returns true if an error was detected
        ++count;
    } while (c != EOF);

    return 0;
}
