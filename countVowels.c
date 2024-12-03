// WAP to count vowels in given string...

#include<stdio.h>
#include<string.h>

int countVowels(char* str, int n)
{
    int i=0,count=0;
    
    while (i<n)
    {
        if (str[i] == 'a'  ||  str[i] == 'e' ||  str[i] == 'i'  ||  str[i] == 'o'  ||  str[i] == 'u')
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char  string[] = "sagar";
    int n = sizeof(string)/sizeof(string[0]);
    printf("number of vowels in the string is %d",countVowels(string,n));
    return 0;
}