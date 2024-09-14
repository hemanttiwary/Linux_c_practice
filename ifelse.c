#include<stdio.h>

int main(){
    
    int a; 
    
    printf("Enter the marks : ");
    scanf("%d", &a);

    if(a <= 100 && a >= 75){
        printf("Grade A");
    }
    else if(a < 75 && a >= 60){
        printf("Grade B");
    }
    else if(a < 60 && a >= 45){
        printf("Grade C");
    }

    else{
        printf("Grade D ...");
    }

return 0;

}