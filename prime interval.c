#include<stdio.h>
int main()
{
int up,lw,i,j,k=0;
scanf("%d",&lw);
scanf("%d",&up);
for(i=lw;i<up;i++)
{
    for(j=2;j<i;j++)
    {
    if(i%j==0)
        ++k;
    }
if(k==0)
{
    printf("\n%d",i);
}
k=0;
}
return 0;
}
