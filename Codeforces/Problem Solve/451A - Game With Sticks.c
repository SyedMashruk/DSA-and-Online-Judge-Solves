#include<stdio.h>
int main()
{
    int n,m,x,i;
    scanf("%d %d",&n,&m);
    x=m*n;
    for(i=0; x>0; i++)
    {
        x=x-((m-i)+(n-i)-1);
    }
    if(i==0 || i%2==0)
         printf("Malvika");
    else
        printf("Akshat");
    return 0;
}
