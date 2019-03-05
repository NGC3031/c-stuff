#include <stdio.h>

/* copy input to output and replace multiple spaces with one space*/

int main()
{
    int c, sp, lastChar;
    sp = 0;

    while ((c = getchar()) != EOF)
    {   
        if (c != ' ') 
            putchar(c);
        if (c == ' ')
            if(lastChar != ' ') 
                putchar(c);
        lastChar = c;
    }
}