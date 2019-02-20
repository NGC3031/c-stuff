#include <stdio.h>

/* count lines of input */

int main()
{
    int c, nl, t, sp;

    nl = 0;
    t = 0;
    sp = 0;
    
    while ((c = getchar()) != EOF)
    {    if (c == '\n')
            ++nl;
         if (c == '\t')
            ++t;
         if (c == ' ')
            ++sp;
    }  
    printf("%d\t %d\t %d\n", nl, t, sp);        
}