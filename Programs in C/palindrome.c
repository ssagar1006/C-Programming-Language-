// WAP Write a program to check whether the input string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main()
{
    char temp;
    char s1[50];
    gets(s1);
    
    int length=strlen(s1);   // to find length of string 
    int check=0;                 
    
    for (int i = 0; i < length-1; i++)
    {
        if (s1[length-1]!=s1[i])              // s1[lenth-1]  is last character of string..
        {
            check=1;                           
            break;
        }
        length--;                             // every character have to be checked... 
    }
    if (check==1)
    {
        printf("Not a Palindrome");
    }
    else  printf("Palindrome");
    
    return 0;
}
