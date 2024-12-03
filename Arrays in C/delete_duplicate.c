

#include<stdio.h>
#include<string.h>

int removeElement(int* nums, int numsSize, int val);
int main()
{
    int array[]={1,2,2,3},n=4,val=2;
    int B = removeElement(&array[0],n,val);
    for (int i = 0; i < 2; i++)
    {
        printf("%d ",B);
    }
    
    return 0;
}

int removeElement(int* nums, int numsSize, int val) 
{
    int length=numsSize,i=0,num=val,j;
    for(int i=0;i<numsSize;i++)
    {
        if(*(nums+i) == val)
        {
            length--;
            for(int j=i;j<length;j++)
            {
                *(nums+j) = *(nums+j+1);
            }
        }
    }
    for(int i=0;i<length;i++)
    {
        return *(nums+i);
    }
}