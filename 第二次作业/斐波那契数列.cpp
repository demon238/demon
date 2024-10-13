#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);     //输入组数                              
	int a[31];
	for (int i = 0; i < n; i++)                           
	{
		scanf("%d", &a[i]); //循环输入数 
	}
	printf("\n");

	int feibo[31];         //斐波那契数列                                    
	feibo[1] = { 1 };
	feibo[2] = { 1 };
	for (int i = 3; i < 31; i++)
	{
		feibo[i] = feibo[i - 1] + feibo[i - 2];
	}

	int temp = 0;                                            
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		printf("%d\n", feibo[temp]);  //输出 
	}
}
