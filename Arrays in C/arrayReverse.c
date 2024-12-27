//WAP to reverse an array of int/float

#include<stdio.h>

int main()
{
    int temp,n=5;      //var to reverse the array and n is no. of elements
    int array[5] = {1,2,3,4,5};
    for (int i = 0; i < n/2; i++)
    {
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    for(int i=0;i<5;i++){
    printf("%d ",array[i]);
    }
    return 0;
}