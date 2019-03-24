#include<stdio.h>

int main() {
   int a[1000],n,i,k,c=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==k)
       {
           c++;
           k=a[i];
       }
   }
   if(c>=1)
   {
       printf("yes %d",c);
   }
   else
   printf("no");
}
