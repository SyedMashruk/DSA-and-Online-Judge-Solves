#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        {
    long long i,count,l;
    char a[100001];
    scanf("%s",&a);
    l=strlen(a);
    if(a[l-1]=='1')
        count=1;
    else
        count=0;
      for(i=0; i<l-1; i++)
    {
       if(a[i]=='1' && a[i+1]=='0' )
        count++;
    }
    printf("%lld\n",count);
        }
    return 0;
}
