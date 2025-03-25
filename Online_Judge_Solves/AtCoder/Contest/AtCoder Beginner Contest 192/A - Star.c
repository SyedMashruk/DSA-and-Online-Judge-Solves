#include<stdio.h>
int main()
{
    long x,i,p=0;
    scanf("%ld",&x);
    i=x;
    while(i%100!=0)
    {
        p++;
        i++;
    }
    if(p==0)
        printf("100\n");
    else
    printf("%ld\n",p);
    return 0;
}
