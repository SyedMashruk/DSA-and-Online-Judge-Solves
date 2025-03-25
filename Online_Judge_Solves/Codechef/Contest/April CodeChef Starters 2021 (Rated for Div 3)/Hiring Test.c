#include<stdio.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
        {
   long long n,m,x,y,i;
   scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
   char a[m+1];
   long long z[n];
   for(i=0;i<n;i++)
   {
       long long countx=0,county=0,j;
       scanf("%s",&a);
       j=0;
       while(a[j]!='\0')
       {
           if(a[j]=='F')
            countx++;
           else if(a[j]=='P')
            county++;
            j++;
       }
       if(countx>=x)
        z[i]=1;
       else if(countx==(x-1) && county>=y)
        z[i]=1;
       else
        z[i]=0;
        countx=0;
       county=0;
   }
   for(i=0;i<n;i++)
    printf("%lld",z[i]);
   printf("\n");
        }
return 0;
}
