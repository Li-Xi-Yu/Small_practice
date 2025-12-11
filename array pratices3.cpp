#include <stdio.h>
int main (void)
{
	int i,j,c=1,a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10];
	for (i=0,j=9 ;i<10 ;i++,j--)
	{
		b[i]=a[j];
	}
	printf ("-----B-----\n");
	for (j=0;j<10;j++)
	{
		printf ("No.%d %d\n",c,b[j]);
		c++;
	}
	printf ("-----A-----\n");
	for (j=0;j<10;j++)
	{
		printf ("No.%d %d\n",c,a[j]);
		c++;
	}
	return 0;
}
