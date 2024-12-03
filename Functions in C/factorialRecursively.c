#include<stdio.h>

int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else 
    {
       return n * factorial(n-1);  
    }
}
int main()
{
    int ans, num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("factorial is %d",factorial(num));
    return 0;
}