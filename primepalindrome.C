#include<stdio.h>
void main()
{
int num,i,rev=0,rem,count=0,temp;
scanf("%d",&num);
temp=num;
for(i=1;i<=num;i++)
{
if(num%i==0)
count++;
}
if(count==2)
{
printf("%d is prime number",num);
}
else{
printf("%d is not a prime number",num);
}
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(temp==rev)
{
printf("%d is a palindrome",tremp);
}
else
{
printf("%d is not a palindrome",temp);
}
}
