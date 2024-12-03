// WAP to swap two structures... 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct s1{
    int a;
    char b;
};
struct s2{
    int c;
    char d;
};
int main()
{
    struct s1 p1={2, 'A'};
    struct s2 p2={3, 'B'};
    int temp=p1.a;
    p1.a = p2.c;
    p2.c=temp;

    char temp2=p1.b;
    p1.b=p2.d;
    p2.d=temp2;
    printf("%d   %c\n",p2.c,p2.d);
    printf("%d   %c\n",p1.a,p1.b);

    return 0;
}