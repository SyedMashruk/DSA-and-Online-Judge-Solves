#include<stdio.h>
#include<math.h>
int main()
{
     long long t,i=1;
    scanf("%lld",&t);
    while(t--)
        {
    double ox,oy,ax,ay,bx,by,r,ac,an,s;
    scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
    r = sqrt(pow(by-oy,2)+pow(bx-ox,2));
    ac= sqrt(pow(by-ay,2)+pow(bx-ax,2))/2;
    an=asin(ac/r);
    s=2*r*an;
    printf("Case %lld: %lf",i,s);
    i++;
        }
    return 0;
}
