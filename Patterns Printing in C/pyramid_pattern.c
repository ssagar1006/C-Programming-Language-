// WAP to print a star pattern in shape of pyramid like               *
//                                                                   ***
//                                                                  *****
#include<stdio.h>

int main()
{
    int count = 6;
    for (int i = 0; i <= count; i++)
    {
       for (int j = 0; j <= (i+count+2); j++)
       {
           if (j>count-i-1)
           {
            printf("*");
           }
           else printf(" ");
           
       }
       printf("\n");
    }
    

    return 0;
}