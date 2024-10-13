#include <stdio.h>

int sushu(int n)  //构造函数判断是否为素数 
{int i;
int k=1;
for(i=2;i<n;i++)
		{if(n%i==0)
	{k=0;
	break;
		}
			}
	return k;	 } 
		 
 int main()
 {int N;
 int i;
 scanf("%d",&N);  //输入正偶数 
 for(int n=4;n<=N;n+=2)  //循环输出小于n的偶数的结果 
{

 for(i=2;i<n;i++)  //循环找到目标素数 
 {if(sushu(i)&&sushu(n-i))
 {
 	break;
 }
 }
 printf("%d=%d+%d\n",n,i,n-i); //输出 
}
 
 }
