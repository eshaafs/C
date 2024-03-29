 // C code for Minimum coin change problem by greedy method
    #include <stdio.h>
    #include <stdlib.h>
     
    //coin_value[] contains value or denomination of coins
    //n is toatal kind of coins and amount is total money to be paid
    void min_coins(int coin_value[],int n,int amount)
    {
      for( int i=0; i< n; i++ ) 
        while(amount >= coin_value[i])
        {
          //while loop is needed since one coin can be used multiple times
          amount= amount - coin_value[i];
          printf("%d  ",coin_value[i]);
        }
      printf("\n");
    }
     
    //this is for qsort(), a built-in sorting funcion in C (its optional for user)
    int cmpfunc (const void * a, const void * b) {
       return ( *(int*)b - *(int*)a ); //for decreasing order
    }
     
    int main()
    {
      int i,j,n,amount;
      printf( "Enter amount to be paid: ");
      scanf( "%d",&amount);
      printf( "Enter total kinds of currency: ");
      scanf("%d",&n);
      int coin_value[n]; //stores coins' values as per the user
      printf( "Enter all currency values: ");
      for(i = 0;i< n; i++)//
        scanf("%d",&coin_value[i]);
      qsort(coin_value, n, sizeof(int), cmpfunc); //qsort is a built in funcition in C
      printf( "The selected currecy values are: \n");
      min_coins(coin_value,n,amount);
      return 0;
    } 