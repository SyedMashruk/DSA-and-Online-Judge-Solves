#include<stdio.h>
int main()
{
    int n,h,x,i,count=0;
    scanf("%d%d%d",&n,&h,&x);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(x+a[i]>=h)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}

