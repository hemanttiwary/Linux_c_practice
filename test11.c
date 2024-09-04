#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number..");
    scanf("%d",&x);
    printf("%d\n", x>9 && x<100);


    int i = 1;
    do {
        printf("%d ", i);
            i++;
        } while(i <= 5);
  

    return 0;

}