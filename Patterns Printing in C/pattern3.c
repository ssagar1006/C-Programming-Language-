// WAP to print all arrangements of numbers 1, 2, 3.  for e.g. 123, 132 231, etc.

#include<stdio.h>

int main()
{
    int i, j, k;
    for(i=1;i<=3;i++)
    {
        for (int j = 1; j <4; j++)
        {
            if(i !=j)
            {
                for (k=1; k<4; k++)
                {
                    if(k!=i  &&  k!=j)
                    {
                        printf("%d%d%d ",i,j,k);
                    }
                }
                
            }
        }
        
    }
    
    return 0;
}