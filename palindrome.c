#include<stdio.h>
int main()
{
int n,pal,i,b,temp=0;
scanf("%d",&n);
pal=n;
for(i=0;pal!=0;i++)
{
    b=pal%10;
    temp=temp*10 + b;
    pal=pal/10;
}
if(n==temp)
    printf("palindrome");
return 0;
}
