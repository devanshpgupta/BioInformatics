#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int len1,len2,flag,loc=0;
  	char sentence[50]="mynameissathya",word[50]="sathya";
   	int i=0,count=0;
   	len1=strlen(sentence);
 	len2=strlen(word);
    printf("Location of (%s) in (%s): ",word,sentence);
    for (i = 0; i < len1; i++)
        if (sentence[i] == word[count])
        {
            flag = 1;
            count++;
            if(count==len2)
               	loc=i-len2+1;
        }
     if (flag)
    {
        printf("%d.\n",loc);
    }
    else
    {
        printf("None\n");
        count=0;
    }
 return 0;
}
