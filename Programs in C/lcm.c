// WAP to print lcm of two numbers

#include<stdio.h>

int main()
{
    int num1 = 18, num2 = 15,max;
    max = num1>num2?num1:num2;
    for (int i = max; i < num1*num2; i++)
    {
        if (i%num1 == 0 && i%num2==0)
        {
            printf("Lcm equals:%d",i);
            break;
        }
        
    }
    
    return 0;
}