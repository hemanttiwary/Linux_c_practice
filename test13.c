#include<stdio.h>

int main(){
    int age;
    printf("Enter age :  ");
    scanf("%d", &age);
    //ternary operator
    age >= 18 ? printf("adult..\n") : printf("not adult");
    
    return 0;
}