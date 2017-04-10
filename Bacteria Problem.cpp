#include<stdlib.h>
#include<stdio.h>
int display(int time);
int main()
{
	int n=0,v=1;
	int min=1,i=0,temp=0;
	printf("Please enter the nos of Bacterias:");
	scanf("%d",&n);
	
	printf("A virus kills a bacteria");
//for initial kill
	n=n-v;
	
	for(i=0;i<n;i++)
	{

		v=2*v;
		temp=2*n-2;
		n=min*temp-min;
		n=n-v;
		min++;
		}	
		min++;
display(min);
return 0;
}

int display(int time)
{
	
		
	printf("\nTotal time taken: %d",time);
	
	
	
}

