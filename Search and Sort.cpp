//Write an algorithm that, given a list of n numbers, returns the largest and smallest numbers in the list.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],small[10],large[10];
	int i=0,j=0,k=0,l=0,n=0,mid=0,first=0,temp=0;
	int sml=0,lrg=0;
	
	for(i=0;i<10;i++)
	a[i]=small[i]=large[i]=0;
	
	
	printf("Please enter the nos of elements in the list:");
	scanf("%d",&n);
	printf("\nPlease enter numbers in list:");

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nNumbers in list are ");

	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	if(n%2==1)
	mid=n/2;

	first=a[0];	

	for(i=0;i<n;i++)
	if(i==mid && mid!=0 )
	printf("\nHey there is a mid and is %d",a[mid]);
	else
	{
	if(a[i]<a[i+1] && i!=i-1)
	{
	small[k]=a[i];
	large[l]=a[i+1];
	i++,k++,l++;
	}
	else
	if(i!=1)
	{
	large[l]=a[i];
	small[k]=a[i+1];
	i++,l++,k++;
	}	
	}
	printf("\nDivided small list:");
	printf("\n");
	for(i=0;i<k;i++)
	printf("%d\t",small[i]);
	printf("\nDivided large list:");
	printf("\n");
	for(i=0;i<l;i++)
	printf("%d\t",large[i]);
	printf("\n");
	for(i=0;i<k;i++)
	for(j=i+1;j<k;j++)
	if(small[i]>small[i+1])
	{
	temp=small[i];
	small[i]=small[j];
	small[j]=temp;
	}
	for(i=0;i<l;i++)
	for(j=i+1;j<l;j++)
	if(large[i]>large[i+1])
	{
	temp=large[i];
	large[i]=large[j];
	large[j]=temp;
	}
	printf("Sorted Smaller list:");
	for(i=0;i<k;i++)
	printf("%d\t",small[i]);
	printf("\n");
	printf("Sorted larger list:");
	for(i=0;i<l;i++)
	printf("%d\t",large[i]);
if(n%2==1)
{

if(small[0]>a[mid])
sml=a[mid];
else
sml=small[0];


if(large[l-1]<a[mid])
lrg=a[mid];
else
lrg=large[l-1];
}
else
{
	sml=small[0];
	lrg=large[l-1];
}
printf("\n Smallest element is :%d",sml);

printf("\n Largest element is :%d",lrg);
return 0;
}

