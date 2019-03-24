#include<stdio.h>
int main()
{
    int n,k=1,a;
    scanf("%d",&n);
    a=n;
    while(n>k)
    {
        k=k*2;
        n--;
    }
    if(k==a)
    printf("yes");
    else
    printf("no");
}
