#include <stdio.h>
 
// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, aux_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, aux_rod);
    towerOfHanoi(n-1, to_rod, from_rod, aux_rod);
}
 
int main()
{
    int n = 2; // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C');  // A, B and C are names of rods
    return 0;
}