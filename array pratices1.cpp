#include <stdio.h>
int main (void)
{
	int scores [10] = {90,30,70,80,};
	scores [4] = {100};
	scores [5] = {99};
	printf ("%d %d %d %d %d %d",scores[0],scores[1],scores[2],scores[3],scores[4],scores[5]);
	return 0;
}
