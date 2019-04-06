/*Basic C to demonstrating callback, that is passing a function to a function
to control execution */
#include <stdio.h>

void A()
{
    printf("Function A\n");
}

/* this is the callback function */
void B(void (*ptr)())
{
    (*ptr)();
}

int main()
{
    void (*ptr)() = &A;

    /* Call function B and pass address of function A as argument */
    B(ptr);

    return 0;
}