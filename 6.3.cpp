#include <stdio.h>
int main (void)
{
	int f[5][5];
	int a,b,c,d,e,sum=0;
	long long num=1;
	printf ("Input 25 numbers:");
	for (a=0;a<5;a++)
	{
		for (b=0;b<5;b++)
		{
			scanf ("%d",&f[a][b]);
		}
	}
	for (c=0;c<5;c++)
	{
		sum+=f[c][c];
		if (c!=4-c)
		{
			
			sum+=f[c][4-c];
		}
	}
	for (c=0;c<5;c++)
	{
		if (c%2==0)
		{
			num*=f[c][c];
		}
		int e=4-c;
		if (c%2==0&&e%2==0)
		{
			if (!(c==2&&e==2))
			{
				num*=f[c][e];
			}
		}
	}
	printf ("\n¶Ô½ÇÏß:%d",sum);
	printf ("Å¼Êý:%d\n",num);
}
