// WAP to copy just a few variables of one structure to another..

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct s1{
    int myNum;
    char character;
};
struct s2{
    int myNum;
    char character;
};
int main()
{
    struct s1 p1={2,'A'};
    struct s1 p2;
    p2 = p1;
    printf("%d   %c\n",p1.myNum,p1.character);
    printf("%d",p1.myNum);
    return 0;
}