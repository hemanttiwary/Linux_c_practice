#include <stdio.h>
#include <unistd.h>
 
int main(){

   int i, j;
   printf("Program to Print the Tables of 1 to 10 \n");
   
   // outer loop
   for(i = 1; i <= 100; i++){
      
      // inner loop
      for(j = 1; j <= 10; j++){
         printf("%5d", i*j);
      }
      sleep(1);
      printf("\a\n");
   }
   return 0;
}