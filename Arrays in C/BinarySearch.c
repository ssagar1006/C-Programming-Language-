// WAP Binary search for an element

#include<stdio.h>

int main()
{
    int array[11] = {1,2,3,4,5,6,7,8,9,10,13};
    int n=11, low=0, high = n-1, target=2, mid, check=0 ; 
    // binary search for 2
    while(low<=high)
    {
        mid=(low+high)/2;
        if(array[mid] == target ){   
        check=1;
        break;
        }
        else if(array[mid] > target)    high=mid-1;
        else   low=mid+1;
    }
    if(check == 1)    printf("Target is at i: %d",mid);
    else     printf("%d is not an element of array",target);   
    return 0;
}
