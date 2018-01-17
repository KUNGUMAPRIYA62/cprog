#include <stdio.h>
void main();
{
    int start, end;
    printf("Enter lower limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print armstrong numbers: ");
    scanf("%d", &end);
    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);
}
