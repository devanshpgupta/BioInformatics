\#include<stdio.h>
#include<stdlib.h>
int logic();
int count;
int del[50];
int main()
{
    int i;
    count=0;
    
	for(i=0;i<2;i++)
    logic();
    printf("\nElements are:");
    for(i=0;i<count;i++)
    printf("%d",del[i]);
          
}
        
        
int logic()
{
	 int c[100][100], num, a[100],i,k;
     printf("\n Enter number of elements:");
    	scanf("%d", &num);
    	printf("\n Enter the values:");
   
    
    for(int i=0;i<num;i++)
        scanf("%d",&a[i]);
        
    for(int j=0;j<(num-1);j++){
	    for(int k=j+1;k<num;k++){
         int i;
         c[j][k]=a[j]-a[k];
         printf("%d",c[j][k]);
         del[count]=c[j][k];
         count++;
       	}
     	
     	
}
}
        
        
