#include<stdio.h>

int getN();
void factorial(int num );
int result;

int main()
{
    int N;
    N=getN();
    if (N==0)
    {

    }
    else{
        result=N;
        factorial(N);
    }
    printf(" %d ! = %d", N,result);
}
void factorial(int num )
{
    num--;
    if (num==0)
        return;
    result*=num;
    factorial(num);
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
