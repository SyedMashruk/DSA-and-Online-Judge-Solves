#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char a[4];
        scanf("%s",&a);
        if(a[0]=='+' || a[1]=='+' || a[2]=='+')
                count++;
        else
                count--;
    }
   printf("%d\n",count);
    return 0;
}
