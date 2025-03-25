#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a[5][5],z;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
           if(a[i][j]==1)
            z=abs(3-(i+1))+abs(3-(j+1));
        }
    }
printf("%d\n",z);
    return 0;
}
