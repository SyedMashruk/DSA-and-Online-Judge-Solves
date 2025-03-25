#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count=0;
        float x;
        scanf("%d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n-1; i++)
        {
            if(a[i]>=a[i+1])
            {
                x=(float)a[i]/(float)a[i+1];
                 if(x>1024)
                    count=count+10;
                else if(x>512)
                    count=count+9;
                else if(x>256)
                    count=count+8;
                else if(x>128)
                    count=count+7;
                else if(x>64)
                    count=count+6;
                else if(x>32)
                    count=count+5;
                else if(x>16)
                    count=count+4;
                else if(x>8)
                    count=count+3;
                else if(x>4)
                    count=count+2;
                else if(x>2)
                    count=count+1;
            }
            else if(a[i]<a[i+1])
            {
                x=(float)a[i+1]/(float)a[i];
                if(x>1024)
                    count=count+10;
                else if(x>512)
                    count=count+9;
                else if(x>256)
                    count=count+8;
                else if(x>128)
                    count=count+7;
                else if(x>64)
                    count=count+6;
                else if(x>32)
                    count=count+5;
                else if(x>16)
                    count=count+4;
                else if(x>8)
                    count=count+3;
                else if(x>4)
                    count=count+2;
                else if(x>2)
                    count=count+1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
