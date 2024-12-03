// WAP user will give input of natural numbers and program will print missing number. 
// if INPUT = 2,3,6,7,9   OUTPUT =1,4,5,8


#include <stdio.h>
                                                           
int main()
{
    int entries, num = 1,j=0;
    printf("Enter number of entries you will enter\n");
    scanf("%d", &entries);

    int number[entries];   
    for (int i = 0; i < entries; i++)
    {
        scanf("%d", &number[i]);
    }
                                                            
    for (int i = 1; i <= number[entries-1]; i++)
    {
        while(j<entries)
        {
            if (number[j] != i)
            {
                printf("%d ", i);
                
                break;
            }
            else
            {
                j++;
                break;
            }
        }
    }
                                                            
    return 0;
}