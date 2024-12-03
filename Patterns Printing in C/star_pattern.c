// WAP to print a pattern like 1 where user will tell number of columns
//                             23     
//                             345
//                             4567    
#include<stdio.h>

int main()
{
    int count=5,num=1;
    for (int i = 0; i < count; i++)
    {
        num = i+1;
         for (int j = 0; j <= i; j++)
         {
            printf("%d ",num);
            num++; 
         }
       //  num = i+2;                    can use this as well instead of num = i+1
         printf("\n");
         
    }
    

    return 0;
}