#include<stdio.h>
int main()
{
    int n,a=0,b=1,fibo;
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    int i;
    for(i=2;i<n;i++)
    {
        fibo=a+b;
        printf("%d\n",fibo);
        a=b;
        b=fibo;
        }
        return 0;
}
