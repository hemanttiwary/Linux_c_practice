
#include<stdio.h>

int main(){
    printf("Enter any number to make Table..");
    int num;
    scanf("%d", &num);
     
    for(int i=1; i<=10; i++){
        //int num2 = num * i;
        printf("%d\n", num * i);
    }
    int j = 100;
    while(j<=2000){
        printf(": --> %d\n",j);
        j++;
        printf("\a");
        
    }
    
    return 0;
}

