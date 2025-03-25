#include<stdio.h>
int main()
{
    long long n,a=0,b=0,c=0;
    scanf("%lld",&n);
    while(n--)
    {
      long long x,y,z;
      scanf("%lld%lld%lld",&x,&y,&z);
      a=a+x;
      b=b+y;
      c=c+z;
    }
    if(a==0 && b==0 && c==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
