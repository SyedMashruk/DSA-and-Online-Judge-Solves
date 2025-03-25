#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    x=sum/2;
    for(i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int q=0;
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        q++;
        if(sum>x)
            break;
    }
    printf("%d\n",q);
    return 0;
}
