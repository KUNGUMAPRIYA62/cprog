#include <stdio.h>
void main();
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("Even Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEven(lowerLimit, upperLimit); 
}
