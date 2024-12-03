// WAP to pass and return a structure using a function..

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// struct number1
// {
//     int id;
//     char character;
// };

// struct number1 returnStructure()
// {
//    struct number1 p1; 
//    p1.id=4;
//    p1.character='S';
//    return p1;
// }
// int main()
// {
//     struct number1 p2;
    
//     p2=returnStructure(3, 'S');;
//     printf("%d    %c",p2.id,p2.character);
//     return 0;
// }



struct number1
{
    int id;
    char character;
};

struct number1* passAndreturnStructure(struct number1* p1)
{
//    struct number1 p4; 
//    p4.id=p1->id;
//    p4.character=p1->character;
   return p1;
}
int main()
{
    struct number1 p3={123, 'S'};
    struct number1* p2;
    
    p2=passAndreturnStructure(&p3);
    printf("%d    %c",p2->id, p2->character);
    return 0;
}