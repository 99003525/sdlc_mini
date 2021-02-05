#include<stdio.h>

int getN();
void factorial(int num );
int result;

int main()
{
    int N;
    N=getN();
    if(N==0||N==1)
    {
        printf("factorial of entered number is 1");
    }
    else if ( N>999)
    {
        printf("please enter number betwenn 0 to 999 ");
    }
    else{
        result=N;
        factorial(N);
        printf(" %d ! = %d ", N,result);
    }
    
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
