//WAP using recursion to add digits of an integer...

#include<stdio.h>
#include<string.h>

int addDigits(int num)
{
    if(num==0)   return 0;
    return num%10 + addDigits(num/10);
}
int main()
{
    printf("sum is %d",addDigits(252525));
    return 0;
}