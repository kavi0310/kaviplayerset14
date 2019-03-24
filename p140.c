#include<stdio.h>
int main()
{
    char a[10000];
    int i,l=0,c=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        {
            c++;
        }
    }
    if(l==c)
    printf("yes");
    else
    printf("no");
}
