#include<stdio.h>

void printHello();//function declaration or prototype
void goodBye();

int main(){
    //main function to execute
    printHello();
    printHello();
    goodBye();

    return 0; //main return
}

// function definition
void printHello(){
    printf("\nHello World.......");
    printf("\n%d", 20+30);

}

void goodBye(){
    printf("\nGood Bye All....");
}