#include<stdio.h>
int main()
{
    int i,n,in[1001],out[1001];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&out[i],&in[i]);
    }
    int x,y;
    y=x=in[0];
    for(i=1; i<n; i++)
    {
         x=(x-out[i])+in[i];
      //  printf("%d\n",y);
        if(x>=y)
            y=x;
    }
    printf("%d\n",y);
    return 0;
}
