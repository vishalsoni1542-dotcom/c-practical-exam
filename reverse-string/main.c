#include <stdio.h>

int main(){

   char str[100];
   
   printf("enter the string: ");
   scanf("%s",str);

   int length=0;

   while(str[length]!='\0' && str[length]!='\n'){
      length++;
   }

   for(int i=length-1; i>=0; i--){
      printf("%c",str[i]);
   }
   return 0;
}