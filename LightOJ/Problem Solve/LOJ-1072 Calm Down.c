#include<stdio.h>
#include<math.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(t--)
  {
      double R,n,x;
      scanf("%lf%lf",&R,&n);
      x=sin(M_PI/n);
      printf("Case %d: %.7lf\n",i,(R*x)/(1+x));
      i++;
  }
  return 0;
}
