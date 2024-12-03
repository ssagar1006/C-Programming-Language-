// writing some basic math function..

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

float divide(int a, int b)
{
    if(b==0)  
    {
        printf("not defined");
        return 0;
    }    
    return (float) a/b;
}
