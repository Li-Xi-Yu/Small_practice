#include <stdio.h>
#define YEAR 12
int main (void)
{
	int f[YEAR+1]={0,1,2};
	int month;
	for (month=3;month<=YEAR;month++)
	{
		f[month]=f[month-1]+f[month-2];
	}
	for (month=1;month<=YEAR;month++)
	{
		printf ("%d\t",f[month]);
	}
	printf ("\nsum=%d\n",f[YEAR]);
	return 0;
 } 
