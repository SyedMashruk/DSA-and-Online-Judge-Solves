#include<stdio.h>
int main()
{
    int n,m,i,count=0;
    scanf("%d%d",&n,&m);
    for(i=n;i>0;i--)
    {
        count++;
        if(count%m==0)
            i=i+1;
    }
    printf("%d\n",count);
    return 0;
}
