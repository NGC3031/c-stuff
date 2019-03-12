/* count the lengths of words and print histogram */
/* Scott Douglass 2018 */
#include <stdio.h>

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */
#define MAXLENGTH   15 /* max length of word counted */

/* count lines characters and words  */

int main()
{
    int c, i, nc, max;
    int ndigit[MAXLENGTH];

    nc = max = 0;

    // create array to store counts and initialize to zero
    for (i = 0; i < MAXLENGTH; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++ndigit[nc-2];
            if(max <= nc) max = nc;
            nc = 0;
        }
        putchar(c);
    }

    printf("\n\n");
    // Output histogram
    for (i =0; i <= MAXLENGTH * 8; ++i)
        printf("_");
    printf("\n");

    printf("\t");
    for (i = 0; i < MAXLENGTH; ++i)
        printf("%d\t", ndigit[i]);
    printf("\n");

    for (i =0; i <= MAXLENGTH * 8; ++i)
        printf("_");
    printf("\n");
    // Print vertical text histogram
    for(int z = max; z >= 1; --z)   /*start at top row and work down */
    {
        for  (i = 0; i < MAXLENGTH; ++i)
        {
            if(ndigit[i] >= z)
                printf("\t*");
            else
                printf ("\t ");
        }
        printf("\n");
    }
    for (i =0; i <= MAXLENGTH * 8; ++i)
        printf("=");
    printf("\n");

    printf("\t");
    for (i = 1; i <= MAXLENGTH; ++i)
    printf("%d\t", i);

    printf("\n");

    for (i =0; i <= MAXLENGTH * 8; ++i)
        printf("=");
    printf("\n");
}