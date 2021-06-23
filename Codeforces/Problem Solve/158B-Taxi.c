#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int s[n],i,count1=0,count2=0,count3=0,count4=0,x;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&s[i]);
        if(s[i]==1)
            count1++;
        else if(s[i]==2)
            count2+=2;
        else if(s[i]==3)
            count3++;
        else
            count4++;
    }
   if(count1>=count3)
    count1=count1-count3;
   else
    count1=0;
    if((count2+count1)%4==0)
   x=count4+count3+((count2+count1)/4);
   else
    x=count4+count3+((count2+count1)/4)+1;
   printf("%lld\n",x);
    return 0;
}

