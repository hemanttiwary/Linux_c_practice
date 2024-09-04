#include<stdio.h>
//SWITCH , CASE , DEFAULT 
int main()
{
    int i;
    printf("Enter a number between 1-4  :-> ");
    scanf("%d", &i);

    switch (i) {
    case 1: 
      printf("Case 1\n");break;
    case 2:
      printf("Case 2\n");break;
    case 3:
      printf("Case 3\n");break;
    case 4:
      printf("Case 4\n");break;
    default:
      printf("Default\n");break;
  }

}