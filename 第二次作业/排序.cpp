#include<stdio.h>
 
int main()
{
   int data[10000];
   int n;
   scanf("%d",&n);
   int i,j;
   for(i = 0;i < n;i ++)
   {
   	scanf("%d",&data[i]);	//�������� 
   }
   
   for(i=0;i<n;i++)  //����˫��ѭ�� 
   {
   	for(j=0;j<n-1;j++)
   	{
   	  if(data[j] > data[j+1])     //����Ĭ�ϲ������������� 
		 {
		 	int temp;        //����һ����ʱֵ���洢���ݣ��Դ����ﵽ������ֵ��Ŀ��
			temp = data[j];
			data[j] = data[j+1];
			data[j+1] = temp;
		 }	
	}
   }
   for(i = 0;i < n;i ++)    //��forѭ�������������������ɵ����� 
   {
   	 printf("%d ",data[i]);
   }
   return 0;
} 
