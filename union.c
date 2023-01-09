#include<stdio.h>

union{

         int x;

        int y;

}a;

int main(){

     a.x = 10;

     a.y = 30;

     printf("nilai x = %d\n", a.x);

     printf("nilai y = %d\n", a.y);

}
