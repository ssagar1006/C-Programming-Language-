// WAP using nested structure to record details of an employee of diffterent organization...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct organization
{
    char organizationName[50];
    int organizationId;

    struct employee
    {
        char employeeName[30];
        int employeeId;
    } emp1, emp2;
};
int main()
{
    struct organization org1 = {"Jio", 43215, "Japan", 905321};
    strcpy(org1.emp2.employeeName, "Nilabh");
    org1.emp2.employeeId = 901231;

    printf("organization 1 name %s \n", org1.organizationName);
    printf("organization id %d \n", org1.organizationId);
    printf("organization 1 employee 2 name %s \n", org1.emp1.employeeName);
    printf("organization 1 employee 2 id %d \n", org1.emp1.employeeId);
    printf("organization 1 employee 2 name %s \n", org1.emp2.employeeName);
    printf("organization 1 employee 2 id %d \n", org1.emp2.employeeId);

    return 0;
}
