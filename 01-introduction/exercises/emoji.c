#include <stdio.h>

int main()
{
    putchar(240);
    putchar(159);
    putchar(153);
    putchar(130);
    putchar(10);
    return 0;
}

// terminal reads the 4 bytes in sequence and return the output of 128578 code pointer
// It is configured for UTF-8

// how many bytes does the terminal read for 🙂🙂🙂?

// 🙂 -> 4 bytes
// 🙂 -> 4 bytes
// 🙂 -> 4 bytes
// \n -> 1 bytes
// 13 -> (4 x 3) + 1

// verify : echo '🙂🙂🙂' | wc -c
