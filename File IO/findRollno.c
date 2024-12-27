// WAP to find average marks, topper and failure marks and their roll number, roll number of students 
// who failed from file 'marks500.txt'... 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE* ptr;
    int rollNo =0;
    int num=0, i=0, max=0, min=100, topper=0, failure=0, sum=0;
    ptr = fopen("marks500.txt","r");
    if(ptr == NULL){
        printf("cannot open file");
        exit(0);
    }
    while(1){
        fscanf(ptr,"%d",&rollNo);
        if(rollNo == -9999)    break;
        fscanf(ptr,"%d",&num);
        sum += num;
        if (num<min)
        {
            min = num;
            failure = rollNo;
        }
        
        if(num>max){
            max = num;
            topper = rollNo;
        }  
        if(num<=33){
            printf("%d ",rollNo);
            i++;
        }
    }
    printf("\nmarks of topper is %d and his roll no. is %d \n",max,topper);
    printf("marks of failure is %d and his roll no. is %d \n",min,failure);
    printf("number of students failed %d\n",i);
    printf("the average number of 500 students is %d",sum/500);
    FILE* ptr2;
    ptr2 = fopen("sagar.txt","w");
    fputs("The average number of marks of 500 students is ",ptr2);
    fprintf(ptr2,"%d",sum/500);
    return 0;
}