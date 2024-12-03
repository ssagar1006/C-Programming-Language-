// // WAP to print university pattern as    U N
//                                          U N I V
//                                          U N I V E R
//                                          U N I V E R S I
//                                          U N I V E R S I T Y
//                                          U N I V E R S I
//                                          U N I V E R
//                                          U N I V
// // WAP to print university pattern as    U N

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// char** pattern(char* str)
// {
//     int n=2;
//     char* print;
//     while(n<11){
//     print = (char*)malloc(n* sizeof(char));
//     for (int i = 0; i < n; i++)
//     {
//         print[i]=str[i];
//     }
//     return print;
//     n=n+2;
//     }
    
    
// }

// int main()
// {
//     int n=2,i=0;
//     char string[] = "UNIVERSITY";
//     char** output = pattern(string);
//     while(n<11)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c ",output[i]);
                
//         }printf("\n");
//         n=n+2;
//     }
     
//     return 0;
// }

int main()
{
    int n=2,j=0;
    char str[] = "ALPHABET";
    int count=8;
    while(n<count+1   &&  n>0 )
    {
        for (int i = 0; i < n; i++)
        {   
            printf("%c ",str[i]);
        }
        printf("\n");
        j++;
        if(j<count/2)  n=n+2;
        
        else   n=n-2;
    }
    
    return 0;
}