#include <stdio.h>
void Max (int,int,int);//注意修改函数类型数量，函数名称注意保持一致// 
int main (void)
{
	int a,b,c;//注意修改变量数量// 
	printf ("Input A,B and C\n"); 
	scanf ("%d%d%d",&a,&b,&c);
	Max (a,b,c);//注意修改变量数量// 
	//printf ("i=%d\n",i);
}
void Max (int a,int b,int c)//注意函数名称及类型数量，形参数量// 

{

	printf ("A=%d B=%d C=%d\n",a,b,c);//注意修改变量数量// 
	printf ("-----------\n");
	if (a>b&&a>c)//a大于b与a大于c// 
	{
		printf ("A is the Max number");
	}
	else if (b>a&&b>c)//b大于a与b大于c// 
	{	
		printf ("B is the Max number");
	}
	else if (c>a&&c>b)//c大于a与c大于b// 
	{
		printf ("C is the Max number");
	}
	else//都不满足，无最大数，出现两个相同的数且第三个数小于这两个数或三个数相等// 
	{
		printf ("Cant find the Max number");
	}
}
