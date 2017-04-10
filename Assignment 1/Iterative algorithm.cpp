//Below code can take any nos of elements in a set and can show maximum nos of known possible sets. It can map all elemets in a list no matter how big or complex.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d,g[10],temp[20];
	int tem,n,j,i;
	printf("Please enter value for d**** i.e nos of lists required:");
	scanf("%d",&d);
	printf("\nPlease enter nosin set from (0,0,...) to (n1,n2,....):");


	for(int i=0;i<10;i++)
	{
		g[i]=0;
	}


	for(int i=0;i<d;i++)
	{
		scanf("%d",&g[i]);
	}
	
	
	for(int i=0;i<20;i++)
	{
		temp[i]=0;
	}
	
		
int js=0;
tem=g[0];
int k=0,e=0;
for(i=0;i<tem;i++)
{

		for(j=js;j<=i;j++)
		{
			temp[e]=j+1;
			e++;
		}
			if(i==tem-1)
			{
			k=k+1;
			tem=g[k];
			js=0;
			j=js;
			i=-1;
			}
			else
			js=j;

}

printf("\nElements in temp :");

j=0;
for(i=0;i<d;i++)

{
	tem=j+g[i];
	j=tem;
}

for(i=0;i<tem;i++)
printf("%d\n",temp[i]);


i=0;
e=0;
int poss=1;
tem=1;
	for(int n=0;n<d;n++)
	{
		poss=tem*g[n];
		tem=poss;
		
	}
printf("Nos of possible sets : %d",tem);

int x;
x=g[0];
int gre=0,sml=0;
for(i=1;i<d;i++)
{
	if(x<g[i])
	{
		gre=g[i];
		x=gre;
	}
	else
	gre=x;
}
x=g[0];
printf("\nGreatest element is %d",gre);
for(i=1;i<d;i++)
{
	if(x>g[i])
	{
		sml=g[i];
		x=sml;
	}
	else
	sml=x;
	
}
printf("\nSmallest element is %d",sml);
printf("\nSets are(Column wise): ");

e=0;

printf("\n");
for(i=0;i<d;i++)
	{
		
		for(j=0;j<poss/g[i];j++)
			{
			for(k=1;k<=g[i];k++)
			printf("%d",k);
			}
	printf("\n");
	
	}
return 0;
}

