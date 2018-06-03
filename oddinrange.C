#include <stdio.h>
void main()
{
    int i,lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("Odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    if(lowerLimit%2==0)
    {
    	lowerLimit++;
    }
    for(i=lowerLimit;i<=upperLimit;i+=2)
    {
    	printf("%d\t",i);
    }
}
