#include <stdio.h>

int sushu(int n)  //���캯���ж��Ƿ�Ϊ���� 
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
 scanf("%d",&N);  //������ż�� 
 for(int n=4;n<=N;n+=2)  //ѭ�����С��n��ż���Ľ�� 
{

 for(i=2;i<n;i++)  //ѭ���ҵ�Ŀ������ 
 {if(sushu(i)&&sushu(n-i))
 {
 	break;
 }
 }
 printf("%d=%d+%d\n",n,i,n-i); //��� 
}
 
 }
