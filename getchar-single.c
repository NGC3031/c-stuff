#include <stdio.h>

/* testing what getchar() really does */


void main()
{
	int c;

	while((c=getchar()) != 100)
	printf("Answer: %i", c);
}
