#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int a[n];
    a[0]=k;
    for(i=1;i<n;i++)
    {
        a[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(a[0]==0 && a[1]==0)
        {
            printf("No solution");
            break;
        }
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
