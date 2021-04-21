#include<stdio.h>
int main()
{
    int i,n,j,q=1,c;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        c=1;
        b[i]=a[i];
        for(j=i+1; j<n; j++)
        {
            if(a[j]>=b[i])
                {
                    b[i]=a[j];
                c++;
                }
            else
                break;
        }
        if(q<c)
            q=c;
    }
printf("%d\n",q);
    return 0;
}
