#include<stdio.h>
int main()
{
    int n,i,r,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r%2!=0)
        {
            c=c+r;
        }
        n=n/10;
    }
    if(c%2==0)
    printf("E");
    else
    printf("O");
}
