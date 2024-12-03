// // WAP to get all arrangements of a given string
// // for e.g ab12 = a12b, a21b, ab21, and all...

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char temp;
//     char s1[10];
//     char s2[10];
//     gets(s1);
//     strcpy(s2,s1);
//     int length = strlen(s1);
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = 0; j < length; j++)
//         {
//             if (s1[i] != s1[j])
//             {
//                 temp = s1[i];
//                 s1[i] = s1[j];
//                 s1[j] = temp;
//                 puts(s1);
//             }
//             if (strcpy(s2,s1)==s2)
//             {
//                 continue;
//             }
            
//         }
//     }

//     return 0;
// }
