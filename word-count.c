#include <stdio.h>

/* counts the length of words in text */

#define aSIZE 16

void main(){

	int c, wd, wdlth;
	wd = wdlth = 0;
	int hist[aSIZE];

	// initialise array
	for(int i=1;i<=aSIZE;i++)hist[i]=0;

	while((c=getchar())!=EOF)
	{
		if(c == ' ' || c == '\n' || c ==','){
			++wd;
		    //printf("Length: %i", wdlth);
			hist[wdlth]=++hist[wdlth];
		    wdlth=0;
		}else{
			++wdlth;

		}			
	}

	// find the largest number
	int max =0;
	for(int i=1;i<=aSIZE;i++){
		if(max<hist[i]){
			max = hist[i];			

	}}

	for(int i=max;i>0;i--){
		for(int j=1;j<aSIZE;j++){
			if(hist[j]<i)printf("---");
			if(hist[j]>=i)printf("-\u2598-");
		}
		printf("\n");
	}

/*	for(int a=1;a<aSIZE;a++){
		printf("Length a:%i Count: %i\n", a, hist[a]);
	}
*/
	printf("MAX: %i",max);
	printf("Number of words is: %i",wd);
}
