#include<stdio.h>
#include<stdlib.h>
int compare (const void *elem1, const void *elem2){
    return *(int*)elem1 - *(int*)elem2;
}
int main()
{
	int A[50],B[50],temp[50],diff[50];
	int i,j,n,count=0;
	printf("\nPlease enter the nos of elements in A & B :");
	scanf("%d",&n);
	printf("\nPlease enter elements for A :");
for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
	}	
	printf("\nPlease enter elements for B :");
for(i=0;i<n;i++)
{
	scanf("%d",&B[i]);
	}
for(i=0;i<n;i++)
{
	temp[i]=A[i];
}
for(i=n;i<n*2;i++)
{
	temp[i]=B[count];
	count++;
}

qsort(temp,n*2,sizeof(int),compare);
	
	printf("\nPrinting elements in Temp:");
	for(i=0;i<n*2;i++)
	{
		printf("\t%d",temp[i]);
	}
count=0;
for(i=0;i<n*2;i++)	
	{
		diff[count]=temp[i+1]-temp[i];
		count++;
	}
	printf("\nPrinting elements for A-B:");
	printf("%d",temp[0]);
	for(i=0;i<n*2-1;i++)
	{
		printf("\t%d",diff[i]);
	}
	return 0;
}
