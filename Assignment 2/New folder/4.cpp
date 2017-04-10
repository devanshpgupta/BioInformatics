#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
   char str[20], ch;
   int count = 0, i,n,m;
 
   printf("\nEnter a string : ");
   scanf("%s", &str);
 
   printf("\nEnter the character to be searched : ");
   scanf("%s", &ch);
 n=strlen(str);
 m=strlen(ch);
   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] == ch)
         count++;
   }
 
   if (count == 0)
      printf("\nCharacter '%c'is not present", ch);
   else
      printf("\nOccurence of character '%c' : %d", ch, count);
 
   return (0);
}
