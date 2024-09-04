#include<stdio.h>
//character  "char" keyword

int characters()
{
    char c = 'a';
    printf("%c\n", c);
}

int constant(){
    const int aa = 13;
    //aa = aa + 10;
    printf("\n%d\n", aa);
  return 0;


}
int main() 
{
    characters();
    constant();
    return 0;
}