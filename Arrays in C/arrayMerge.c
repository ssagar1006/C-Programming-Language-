// WAP merge two arrays

#include<stdio.h>

int main()
{
    int array1[10] = {2,5,1,4,3};
    int array2[5] = {7,6,0,8,9};
    int i;
    for (int i = 0; i < 5; i++)
    {
         printf("%d \n",array1[i]);
    }
    
    for(int i = 5; i < 10; i++)
    {
        array1[i] = array2[i-5];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array1[i]);
    }
    

    return 0;
}