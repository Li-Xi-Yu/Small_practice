#include <stdio.h>
int FindMax (int a[] ,int b);
int main (void)
{
	int x,i,a[5];
	int min;
	printf ("Input 5 numbers\n");
	for (i=0;i<5;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("-----\n");
	for (i=0,x=1;i<5;i++)
	{
		printf ("%d. %d\n",x,a[i]);
		x++;
	}
	min=FindMax (a,5);
	printf ("-----\n");
	printf ("Min=%d",min);
}
int FindMax (int a[],int b)
{
	int min=a[0];
	int i;
	for (i=0;i<b;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
