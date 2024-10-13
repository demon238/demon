#include<stdio.h>
 
int main()
{
   int data[10000];
   int n;
   scanf("%d",&n);
   int i,j;
   for(i = 0;i < n;i ++)
   {
   	scanf("%d",&data[i]);	//输入数据 
   }
   
   for(i=0;i<n;i++)  //采用双重循环 
   {
   	for(j=0;j<n-1;j++)
   	{
   	  if(data[j] > data[j+1])     //这里默认采用升序来排列 
		 {
		 	int temp;        //定义一个临时值来存储数据，以此来达到交换数值的目的
			temp = data[j];
			data[j] = data[j+1];
			data[j+1] = temp;
		 }	
	}
   }
   for(i = 0;i < n;i ++)    //用for循环来遍历并输出排序完成的数组 
   {
   	 printf("%d ",data[i]);
   }
   return 0;
} 
