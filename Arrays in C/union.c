// WAP to do union of two arrays
// for e.g. arr1 = {1,2,3,1,2}  arr2={1,2,1}  final union = {1,2,3}

#include <stdio.h>

int main()
{
    int arr1[] = {3,4,5,6,7,8};
    int arr2[] = {1,2,3,4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int duplicate = 0;

    int result[n1 + n2];
    int max = n1 >= n2 ? n1 : n2;
    int min = n2 >= n1 ? n1 : n2;
    int elements = 1;
    int choose =0;
    int value =0;

    for (int i = 0; i <= max; i++)
    {
        if(i==min && choose==0){
            i=0;
            choose=1;
        }
        if (min == n1)
        {
            if (choose == 1)
                value = arr2[i];
            else
                value = arr1[i];
        }
        else if(min == n2){
            if (choose == 1)
                value = arr1[i];
            else
                value = arr2[i];
        }
        
        for (int j = 0; j < elements; j++)
        {
            if (result[j] == value)
            {
                duplicate = 1;
            }
        }
        if (duplicate == 0)
        {
            result[elements-1] = value;
            elements++;
        }
        duplicate =0;
    }

    for (int i = 0; i < elements-1; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}