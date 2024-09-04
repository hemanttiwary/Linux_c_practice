#include<stdio.h>

int main(){

    printf("nn\n\nnn\nnn");
    printf("nn/nn/nn/nn");

    char ch;
    printf("\nEnter a character : ");
    scanf("%c", &ch);

    if(ch >= 'A'  && ch <= 'Z'){
        printf("\n Upper case \n" );
    }    
    else if (ch >= 'a' && ch <= 'z'){
        printf("\n Lower case...");
    }

    else{
        printf("\n Not an English Character");
    }
    return 0;

}