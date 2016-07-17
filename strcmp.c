#include<stdio.h>
 
int main() {
   char str1[30], str2[30];
   int i;
 
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
 
   i = 0;
   while (str1[i] == str2[i])
      i++;
   if (str1[i]=str2[i])
      printf("both strings are equal");
   
 
   return (0);
}
