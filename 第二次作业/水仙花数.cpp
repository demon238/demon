#include <stdio.h> 

int main()
{
	int n,i,j,k;  //定义函数 
	for(n=100;n<1000;n++) //界定范围使n为三位数 
	{i=n/100; //百位 
	j=n/10%10;//十位 
	k=n%10;   //个位 
	if(n==i*i*i+j*j*j+k*k*k) //判断 
 {  printf("%d\n",n); //输出 
 }
	}
}
