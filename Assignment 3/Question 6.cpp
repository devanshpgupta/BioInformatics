#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n;
	int nos=0;
	printf("\nPlease enter the size of matrix:");
	scanf("%d %d",&m,&n);
	nos=m*n;
	printf("\n Number of possible paths from source (0,0) to sink (%d,%d) is %d",m,n,nos-4);
	return 0;
	
}
