#include<stdio.h>
int main()
{
int i,num,count=0;
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
count++;
}
if(count==2)
{
printf("Yes,%d is a prime number",num);
}
else{
printf("No,%d is not a prime number",num);
}
  return 0;
}
