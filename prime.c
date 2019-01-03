#include<stdio.h>
int main()
{
int b,n,count=0;
scanf("%d",&b);
for(n=2;n<b;n++)
{
if(b%n==0)
count++;
}
if(count==0)
printf("prime number\n");
else
printf("not a prime number\n");
}
