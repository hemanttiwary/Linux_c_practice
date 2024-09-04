#include<stdio.h>

int main(){
    int age;
    printf("Enter age :  ");
    scanf("%d", &age);

    if(age <= 18 ){
        printf("You are a Kid...");

    }
    else if(age > 18 && age <= 50){
        printf("You are an Adult Now...\n");
        printf("You can drive cars/bike..\n");
        printf("You can vote Now...\n");
        printf("You can go to collage...\n");
    }
    else{
        printf("You are an old guy with lots of experiance....");
    }
    return 0;
}