// WAP using file I / O commands...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//     // opening a .txt file writing something on it...
//     int
//     main()
// {
//     FILE *ptr;
//     ptr = fopen("./Hello.txt", "w+");

//     if (ptr == NULL)
//         printf("File cant be created");
//     char str[] = "I am here to hack your system"
//                  " Save it from me if you can";
//     fputs(str, ptr);
//     fclose(ptr);
//     printf("file created \n");
//     return 0;
// }

// // writing to a binary file...
// struct num
// {
//     int n1, n2;
// };

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("./Hello.txt", "w+");
//     if (ptr == NULL)
//     {
//         printf("File cant be created");
//         exit(1);
//     }

//     struct num num1;
//     for (int i = 0; i < 10; i++)
//     {
//         num1.n1 = i;
//         num1.n2 = 12 + i;

//         fwrite(&num1, sizeof(struct num), 1, ptr);
//     }

//     fclose(ptr);
//     printf("file created \n");
//     return 0;
// }

// // read from a normal txt file..
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("Hello.txt", "r");
//     char str[80];
//     if (ptr == NULL)
//     {
//         printf("File cant be created");
//         exit(1);
//     }
//     // char str[] = "I am here to hack your system" " Save it from me if you can";
//     fgets(str, 80, ptr);
//     if (fgets(str, 80, ptr) != NULL)
//     {
//         puts(str);
//     }
//     fclose(ptr);
    
//     return 0;
// }

// // reading from a binary file...
// struct num
// {
//     int n1, n2;
// };

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("./Hello.txt", "rb");
//     if (ptr == NULL)
//     {
//         printf("File cant be created");
//         exit(1);
//     }
    
//     struct num num1;
//     for (int i = 0; i < 10; i++)
//     {
//         num1.n1 = i;
//         num1.n2 = 12 + i;

//         fwrite(&num1, sizeof(struct num), 1, ptr);
//         printf("n1: %d\tn2: %d\n", num1.n1, num1.n2);
//     }

//     fclose(ptr);
//     printf("file created \n");
//     return 0;
// }

// implementing fseek...

int main()
{
    FILE *ptr;
    ptr = fopen("Hello.txt", "w+");
    char str[80];
    fputs("Welcome to my World", ptr);
    fseek(ptr, 11, SEEK_SET);
    fputs("Hacking ", ptr);
    fclose(ptr);
    printf("file created \n");
    return 0;
}