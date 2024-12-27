// WAP Union and intersection of elements of two arrays

#include<stdio.h>

int main()
{
    int array1[10] = {2,5,1,4,3};
    int array2[5] = {7,6,1,2,9};
    int i;
    
    // for intersection
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j<5; j++)
        {
        if(array1[i] == array2[j])
        printf("%d \n",array1[i]);
        }   
    }
    
    return 0;
}