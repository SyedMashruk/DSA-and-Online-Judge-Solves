#include<stdio.h>
long long a[1000],b[1000],c[1000];
void hulu()
{
    long long i,j,count,min,x;
    for(i=0; i<1000; i++)
    {
        a[i]=i+1;
        count=0;
        for(j=1; j<=(i+1)/2; j++)
        {
            if((i+1)%j==0)
                count++;
        }
        b[i]=count+1;
    }
    for(i=0; i<999; i++)
    {
        for(j=i+1; j<1000; j++)
        {
            if(b[i]>b[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0; i<1000; i++)
    {
        min=a[i];
        x=i;
        for(j=0; j<1000; j++)
        {
            if((min<a[j] && b[x]==b[j]) || (b[j]<b[x]))
            {
                min=a[j];
                x=j;
            }
        }
        c[i]=min;
        a[x]=-1;
        b[x]=50;
    }
}
int main()
{
    long long t,z=1;
    scanf("%lld",&t);
    hulu();
    while(t--)
    {
       long long n;
       scanf("%lld",&n);
       printf("Case %lld: %lld\n",z,c[n-1]);
       z++;
    }
    return 0;
}
