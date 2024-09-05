#include <stdio.h>
#include <string.h>
#include<unistd.h>
int main(){

   int i, j, l;
   char x[] = "Hemant-kumar-tiwary";
   l = strlen(x);

   // outer loop
   for(i = 0; i < l; i++){
    sleep(1);
      // inner loop
      for(j = 0; j <= i; j++)
      { 
            sleep(1);
         printf("%c", x[j]);
         //sleep(1);
   
      }
      
      printf("\n");
   
   }

   return 0;

}