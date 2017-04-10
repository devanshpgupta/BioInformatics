#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int stringmatch(char str1[50],char str2[50],int n1,int n2);
int main()
{
	int n1,n2,loc;
	char str1[50];
	char str2[50];
	int i;
	
	
//	printf("\nPlease enter nos of charecters in STR1:");
//	scanf("%d",&n1);
	printf("\nPlease enter elements in STR1:");
//	for(i=0;i<n1;i++)
	scanf("%s",&str1);
	n1=strlen(str1);
//	printf("\nPlease enter nos of charecters in STR2:");
//	scanf("%d",&n2);
	printf("\nPlease enter elements in STR2:");
//	for(i=0;i<n2;i++)
	scanf("%s",&str2);
	n2=strlen(str2);
	loc=stringmatch(str1,str2,n1,n2);
	printf("\nString matches at %d location",loc+1);
	return 0;
}
int stringmatch(char str1[50],char str2[50],int n1,int n2)
{
	int count=0;
	int i,j=0,k=0,loc=0;
	for(i=0;i<n1-n2;i++)
	{
	
			for(k=0;k<n2;k++)
			{
				if(str1[i+k]==str2[k])
				{
				count++;
				if(count==n2)
				{
				loc=i;
				return loc;
				}
				}
				else
				count=0;
			
			}
		}
	
	

}
