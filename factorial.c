#include<stdio.h>
#include "factorial.h"

int getN();
int factorial(int num );
int result;

int main()
{
    int N;
    N=getN();
    if(N==0||N==1)
    {
        printf("factorial of entered number is 1");
    }
    else if (N>11)
    {
        printf("please enter a number between 0 to 11");
    }
    else{
        result=N;
        factorial(N);
        printf(" %d ! = %d ", N,result);
    }
    
}
int factorial( int num )
{
    num--;
    if (num==0)
        return 1;
    else
        result*=num;
        factorial(num);
        return result;
}

int getN()
{
    int num;
    do{
        printf("enter the number");
        scanf("%d",&num);
        if(num<0)
        {
            printf("please enter a number greater than zero");
        }
    }while(num<0);
    return num;
}

