#include<stdio.h>

void main(){
    for(int i=0; i<= 50 ; i++){
        printf("=");
        }
    printf("\n");

    for(int j=0;j<= 20; j++)
    {
        printf("||\t\t\t\t\t\t\t\t ||\n");
        if(j == 10){
            printf("_____________________________________________\n");
        }
    }
    printf("__________________________________________________________");
}