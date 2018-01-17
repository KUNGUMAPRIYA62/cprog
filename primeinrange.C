#include <stdio.h>
void main();
{
    int lowerLimit, upperLimit;
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    printPrimes(lowerLimit, upperLimit);
}
