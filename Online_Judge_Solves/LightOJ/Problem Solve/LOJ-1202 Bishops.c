#include<stdio.h>
#include<math.h>
int main()
{
    long long t,i=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long r1,r2,c1,c2,x,y,w,z;
        scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
        w=abs(r1-c1);
        z=abs(r2-c2);
          x=abs(r1-r2);
          y=abs(c1-c2);
          if((w%2==0 && z%2==1) || (w%2==1 && z%2==0))
            printf("Case %lld: impossible\n",i);
          else
          {
              if(x==y)
                printf("Case %lld: 1\n",i);
              else
                printf("Case %lld: 2\n",i);
          }
        i++;
        }
    return 0;
}
