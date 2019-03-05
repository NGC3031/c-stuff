#include <stdio.h>

/* copy input to output and replace multiple \t \b with  \\ */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {   
        if (c != '\t' || c != '\b') 
            putchar(c);
        if (c == '\t')
        { 
            putchar('\\');
            putchar('t');
        }
        if (c == '\b')
        { 
            putchar('\\');
            putchar('b');
        }
    }
}