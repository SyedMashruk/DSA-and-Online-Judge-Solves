#include<stdio.h>
int main()
{
    long long k, n ,w , i, x=0;
    scanf("%lld %lld %lld",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
     x=x+i*k;
    }
    if((x-n)>0)
    printf("%lld\n",x-n);
    else
        printf("0\n");
    return 0;
}
