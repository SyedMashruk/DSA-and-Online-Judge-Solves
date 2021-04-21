#include<stdio.h>
int main()
{
    int t,i,j,temp,n,y,z;
    scanf("%d %d",&n,&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    y=a[n-1]-a[0];
       for(i=0;i<t-(n-1);i++)
       {
           z=0;
           z=a[i+n-1]-a[i];
           if(z<y)
            {
                y=z;
            }
       }
        printf("%d\n",y);
    return 0;
}
