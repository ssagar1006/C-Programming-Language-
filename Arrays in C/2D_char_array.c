// WAP to enter a 2D character array..

#include<stdio.h>
#include<string.h>

int main()
{
    char names[3][10];
    for (int i = 0; i < 3; i++)
    {
       scanf("%s",names[i]);
    }
    printf("\n");
     for (int j = 0; j < 3; j++)
    {
       printf("%s \n",names[j]);
    }
         
    return 0;
}
