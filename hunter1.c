#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
  int a[x],i,j=0,;
  for(i=0;i<x;i++)
  scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
      if(a[j]==a[i+1])
         {
           printf("\n%d",a[j]);
           for(j=i+1;j<x;j++)
           a[j]=a[j+1];
           a[x]='\0';
           l--;
                  }
         j++;
         }
         }
