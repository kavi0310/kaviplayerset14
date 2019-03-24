#include<stdio.h>
int main()
{
    int n,p=1,a;
    scanf("%d",&n);
    a=n;
    while(n>p)
    {
        p=p*2;
        n--;
    }
    if(p==a)
    printf("yes");
    else
    printf("no");
}
