//continue and break
#include<stdio.h>

int main(){

    for(int i =1; i<=10; i++)
    {
        if(i == 3)
        {
            continue;  
        }
        if(i == 8)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}
