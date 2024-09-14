#include<stdio.h>

void namaste();//function declaration or prototype
void bonjour();

int main(){
    //main function to execute
    char ch ;
    printf("Enter H for indian or R for french..");
    scanf("%c", &ch);

    if(ch == 'h'){
        namaste();
        
    }
    else if(ch == 'r'){
        bonjour();
        //printf("French budy. bonjour.");
    }
    // else{
    //     printf("Unknown Person..");
    // }

    return 0;
}

// function definition
void namaste(){
    printf("\n Namaste Duniya walo.......");
    //printf("\n%d", 20+30);

}

void bonjour(){
    printf("\n Good Bye ...french....");
}