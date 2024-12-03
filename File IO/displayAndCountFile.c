// WAP read the given story.txt file

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char ch;
    int i = 0, position = 0, j=0;
    char str[1000];
    char name[] = "Sagar";
    ptr = fopen("story.txt", "r+");
    while (fgets(str, 100, ptr) != '\0')
    {
        //    position = ftell(ptr);       // with this we will gcan number of characters in file as well..
        puts(str);
        if((ch=fgetc(ptr))==" ")   j++;
        i++;
    }

    fseek(ptr, 0, SEEK_END);
    position = ftell(ptr);
    printf("number of lines = %d\n", i);
    printf("number of characters = %d\n", position);
    fclose(ptr);
    return 0;
}
