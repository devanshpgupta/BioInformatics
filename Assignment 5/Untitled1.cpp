#include<stdio.h>
#include<stdlib.h>

int main()
{
    int temp=0;
    int interval=0;
    int temp1=0;
 int count;
 int nos=0;
 int a[10][2];
 int b[10][2];
int i=0,j=0;
 printf("\n Please enter the number of sets:");
 scanf("%d",&count);
 printf("\nPlease enter sets:");
 
 for(i=0;i<count;i++)
 scanf("%d %d",&a[i][1],&a[i][2]);
 
 printf("\nPlease enter the common weight of intervals:");
 scanf("%d",&interval);
 temp1=0;
  
 printf("\nSets are as follows:");
 
for(i=0;i<count;i++)
{
 printf("%d %d",a[i][1],a[i][2]);
 printf("\n");
} 
 printf("\nSorting on basis of end points");
 temp=a[1][1];
for(i=0;i<count;i++)
for(j=i+1;j<count;j++)
	
	if(a[i][2]>a[j][2])
	{
		temp=a[j][2];
		a[j][2]=a[i][2];
		a[i][2]=temp;
		temp=a[j][1];
		a[j][1]=a[i][1];
		a[i][1]=temp;
	}
for(i=0;i<count;i++)
for(j=i+1;j<count;j++)
	if(a[i][1]>a[j][1]&&a[i][2]<a[j][2])
	{
	a[j][2]=0;
	a[j][1]=0;}

printf("\n Sorted set:");
for(i=0;i<count;i++)

if(a[i][1]!=0&&a[i][2]!=0){
printf("%d %d\n",a[i][1],a[i][2]);
temp1++;
}

printf("\n Total Interval is %d",interval*temp1);
getchar();
}


