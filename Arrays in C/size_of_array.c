// WAP to count number of elements in an array

#include<stdio.h>

int main()
{
    int array[]={2,3,1,5,7};
    int count = sizeof(array)/sizeof(array[0]);
    printf("%d",count);

    return 0;
}



