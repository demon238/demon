#include <stdio.h> 

int main()
{
	int n,i,j,k;  //���庯�� 
	for(n=100;n<1000;n++) //�綨��ΧʹnΪ��λ�� 
	{i=n/100; //��λ 
	j=n/10%10;//ʮλ 
	k=n%10;   //��λ 
	if(n==i*i*i+j*j*j+k*k*k) //�ж� 
 {  printf("%d\n",n); //��� 
 }
	}
}
