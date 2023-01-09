#include <stdio.h>

    int main(){
        int n = 0;
        int total = 1;
        for(int i = n; i >= 1; i--){
            if(n<2){
                total *= 1;
            }else{
                total *= i;
            }
        }
        printf("Hasil faktorial 5 = %d", total);
       return 0;
    }
