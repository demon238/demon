#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);     //��������                              
	int a[31];
	for (int i = 0; i < n; i++)                           
	{
		scanf("%d", &a[i]); //ѭ�������� 
	}
	printf("\n");

	int feibo[31];         //쳲���������                                    
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
		printf("%d\n", feibo[temp]);  //��� 
	}
}
