#include <stdio.h>
int main (void)
{
	int b=1,i,j,a[2][3];
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf ("%d",&a[i][j]);
		}
	}
	printf ("-print-\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("No.%d %d\n",b,a[i][j]);
			b++;
		}
	}
	return 0;
}

