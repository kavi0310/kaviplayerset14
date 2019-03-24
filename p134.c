#include<stdio.h>
int main()
{
    int n,i,r,j,a[1000],min;
    scanf("%d%d%d",&n,&i,&r);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<n;j++)
    {
        if(a[j]==i)
        {
    printf("%d",a[j]);
    break;
        }
    }
}
